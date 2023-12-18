# Insertion Sort
Insertion sort is a sorting algorithm that iterates over an array if length n. The algorithm checks compares the current elements value in the array with the next elements value. In the case of a ascending array it will check if the current element is greater than next element. If it is then it will swap the values then the iterate back to the beginning of the array until the left side of the array from the current index is sorted.

## Explanation

Lets use an example using the following array
| 5 | 4 | 2 | 10 |
| - | - | - | -- |

1: On the first pass we will compare index *0* with index *1*. 
 
| `5` | `4` | 2 | 10 |
| --- | --- | - | -- |

***5 > 4*** so we swap the values.

| `4` | `5` | 2 | 10 |
| --- | --- | - | -- |

2: The second pass will compare index *1* with index *2*. 

| 4 | `5` | `2` | 10 |
| - | --- | --- | -- |

***5 > 2*** is true so we swap.

| 4 | `2` | `5` | 10 |
| - | --- | --- | -- |

Now we loop backwards. 

| `4` | `2` | 5 | 10 |
| --- | --- | - | -- |

***4 > 2*** is true so we swap.

| `2` | `4` | 5 | 10 |
| --- | --- | - | -- |

3: The third pass will go back to the unsorted section of the array and compare index *2* with index *3* 

| 2 | 4 | `5` | `10` |
| - | - | --- | ---- |

`5 > 10` is false so we move on.

The end of the array is reach and the program terminates. the array is now sorted.

## Code Example

```c++
#include <iostream>
#include "insertion_sort.h"


int main() {
    size_t size = 4;
    int nums[size] {5, 4, 2, 10};

    insertion_sort(nums, size);

    // Print sorted array
    std::cout << "[ ";
    for (int &num: nums) {
        std::cout << num << " ";
    }
    std::cout << "]"<<  std::endl;

    return 0;
}
```

## Time Complexity
O(n^2) where is the size of the array