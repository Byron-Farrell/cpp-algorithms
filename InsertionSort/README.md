# Insertion Sort
Insertion sort is a sorting algorithm that iterates over an array of length n. The algorithm checks and compares the current element value in the array with the next element value. In the case of an ascending array, it will check if the current element is greater than the next element. If it is then it will swap the values and then iterate back to the beginning of the array until the left side of the array from the current index is sorted.

## Explanation

Let's use an example using the following array
| 5 | 4 | 2 | 10 |
| - | - | - | -- |

---

1: On the first pass we will compare index *0* with index *1*. 
 
| `5` | `4` | 2 | 10 |
| --- | --- | - | -- |

***5 > 4*** so we swap the values.

| `4` | `5` | 2 | 10 |
| --- | --- | - | -- |

---

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

---

3: The third pass will go back to the unsorted section of the array and compare index *2* with index *3* 

| 2 | 4 | `5` | `10` |
| - | - | --- | ---- |

`5 > 10` is false so we move on.

The end of the array is reached and the program terminates. the array is now sorted.

## Code Example

```c++
void insertion_sort(int *array, size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;

            for (size_t j = i; j > 0; j--) {
                if (array[j - 1] > array[j]) {
                    int temp = array[j];
                    array[j] = array[j - 1];
                    array[j - 1] = temp;
                }
            }
        }
    }
} 
```

## Time Complexity
O(n^2) where is the size of the array
