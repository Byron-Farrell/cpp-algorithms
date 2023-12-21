# Bubble Sort
Bubble sort is a simple sorting algorithm that iterates through an array and one by one checks if the next element in the array is larger than the next element in the list. If the next element is larger than the current element they are swapped.


## Explanation

Lets look at an example using the following array of integers 
`int unsorted_array[3] = [3, 2, 1]`

The algorithm will loop through the array and compare the current integer in the iteration with the next integer.

---
we are now at index `0`. Lets compare `unsorted_array[0]` with `unsorted_array[1]`

current array: `[3, 2, 1]`

current index value: `3`

next index value: `2`

`3 < 2 = false` *swap values*

The next integer is greater than the current integer. So we swap the two values.

`[3, 2, 1]` -> `[2, 3, 1]`

---

we are now at index `1`. Lets compare `unsorted_array[1]` with `unsorted_array[2]`

current array: `[2, 3, 1]`

current index value: `3`

next index value: `1`

`3 < 1 = false` *swap values*

`[2, 3, 1]` -> `[2, 1, 3]`

---

The index is now `2` and we have reached the end of the list.The array is still not sorted. Now we go back to the start of the array.

current array: `[2, 1, 3]`

current index value: `2`

next index value: `1`

`2 < 1 = false` *swap values*

`[2, 1, 3]` -> `[1, 2, 3]`

---

current array: `[1, 2, 3]`

current index value: `2`

next index value: `3`

`2 < 3 = true` *don't swap values*

---

Finally, we loop through the array again and because it is already sorted now values will be swapped. We can use this as an identifier to tell us that the array has been sorted and we can exit out of the loop.

`swapped == false -> exit the loop`

## Code Example

```c++
#include "bubble_sort.h"


int main() {
    size_t size = 5;
    int unsorted_array[size] {-10, 20, 30, -40, -50};

    bubble_sort(unsorted_array, size);

    return 0;
}
```

The bubble sort algorithm will sort the array.

`-10, 20, 30, -40, -50` -> `[-50, -40, -10, 20, 30]`

## Time Complexity
O(n<sup>2</sup>) where is the size of the array
