# Quick Sort
Quick sort is an algorithm used to quickly sort an array of elements by using a divide conquer strategy.

## Explanation

A pivot is selected and all elements to smaller than the pivot are moved to the start of the array
and all elements greater than the pivot are moved to the other end of the array. The array is then split 
into to sub arrays and the process repeats. This process repeats recursively until the array is sorted.


| 4 | 3 | 2 | 1 |
|---|---|---|---|

---
| 4 | 3 | 2 | 1 |
|---|---|---|---|

`index = 0`
`pivot = 0`

`4 < 1 = false`

*do nothing*

---
| 4 | 3 | 2 | 1 |
|---|---|---|---|

`index = 1`
`pivot = 0`

`3 < 1 = false`

*do nothing*

---
| 4 | 3 | 2 | 1 |
|---|---|---|---|

`index = 2`
`pivot = 0`

`2 < 1 = true`

*do nothing*

---
| 4 | 3 | 2 | 1 |
|---|---|---|---|

`index = 3`
`pivot = 0`

*Reached the end of the array swap end value with pivot.*

| 1 | 3 | 2 | 4 |
|---|---|---|---|

---

### No elements left of array so skip

---

### Sort elements to the right of pivot

---

| 3 | 2 | 4 |
|---|---|---|

`index = 0`
`pivot = 0`

`3 < 4 = true`

*Swap current index with pivot. Since pivot is zero we do nothing*

---

| 3 | 2 | 4 |
|---|---|---|

`index = 1`
`pivot = 0`

`2 < 4 = true`

*Swap current index with pivot.*

| `2` | `3` | 4 |
|-----|-----|---|

## Code Example

```c++
void quick_sort(int *array, int size) {

    if (size <= 1) {
        return;
    }

    int pivot = 0;

    for (int i = 0; i < size - 1; i++) {
        if (array[i] < array[size - 1]) {
            if (i != 0) {
                int temp = array[i];
                array[i] = array[pivot];
                array[pivot] = temp;

            }
            pivot++;

        }
    }

    int temp = array[size - 1];
    array[size - 1] = array[pivot];
    array[pivot] = temp;

    if (pivot == 0) {
        quick_sort(array, 0);
        quick_sort(array + 1, size - 1);
    }
    else {
        quick_sort(array, pivot);
        quick_sort(array + pivot + 1, size - pivot - 1);
    }
}
```
## Time Complexity
O(n*logn) where n is the size of the array
