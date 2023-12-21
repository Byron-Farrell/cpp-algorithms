# Selection Sort

The selection sort algorithm will iterate through an array and divide it into 2 sections; sorted and unsorted.
The first pass of the algorithm will find the lowest value in the array by iterating to the end of the array.
It will then swap the current value at index 0 with the smallest value index.
Index 0 will now be considered sorted. We repeated this process on the unsorted array.
With each iteration, the size of n will be decreased by 1.

## Explanation

Consider the array:

| 64 | 25 | 12 | 22 | 11 |
|----|----|----|----|----|

**First iteration:** loop from index i + 1(which is 0 + 1) to the end of the array 
and swap the smallest number with the current index i.

Since 11 is the smallest it will be swapped with the value at index i.

`64 and 11 swapped`

| `11` | 25 | 12 | 22 | `64` |
|------|----|----|----|------|

the array from index 0 to i is now considered sorted.

*Sorted Array*

| 11 |
|----|

*Unsorted Array*

| 25 | 12 | 22 | 64 |
|----|----|----|----|

---

**Second iteration:** repeat the process in the first iteration on the unsorted array.
The smallest value in the unsorted array is 12, so we swapped index i (which in this case is 1)

`25 and 12 swapped`

| `12` | `25` | 22 | 64 |
|------|------|----|----|

the array from index 0 to i is now considered sorted.

*Sorted Array*

| 11 | 12 |
|----|----|

*Unsorted Array*

| 25 | 22 | 64 |
|----|----|----|

---

**Third iteration:** The smallest value in the unsorted array is now 22.

`25 and 22 swapped`

| `22` | `25` | 64 |
|------|------|----|

the array from index 0 to i is now considered sorted.

*Sorted Array*

| 11 | 12 | 22 |
|----|----|----|

*Unsorted Array*

| 25 | 64 |
|----|----|

---

**Forth iteration:** The end of the array has been reached and is now sorted

*Sorted Array*

| 11 | 12 | 22 | 25 | 64 |
|----|----|----|----|----|


## Code Example

```c++
void selection_sort(int *unsorted_array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        int min_index = i;
        for (size_t j = i + 1; j < size; j++) {
            if (unsorted_array[min_index] > unsorted_array[j]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = unsorted_array[i];
            unsorted_array[i] = unsorted_array[min_index];
            unsorted_array[min_index] = temp;
        }
    }
}
```

## Time Complexity
O(n<sup>2</sup>) where n is the size of the array.
