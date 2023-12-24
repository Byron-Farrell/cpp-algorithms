# Quick Sort

WIP

## Explanation

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

## Time Complexity
O(n*logn) where n is the size of the array

1 2 3 4
2 1 3 4
2 3 1 4
4 3 2 1
