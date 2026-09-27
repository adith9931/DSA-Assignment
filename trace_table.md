# Trace Table - Question 1

## A. Max Heap Insertion

Patient severity scores:

45, 72, 30, 90, 65, 50, 85

| Step | Inserted Value | Heap |
|---|---:|---|
| 1 | 45 | 45 |
| 2 | 72 | 72 45 |
| 3 | 30 | 72 45 30 |
| 4 | 90 | 90 72 30 45 |
| 5 | 65 | 90 72 30 45 65 |
| 6 | 50 | 90 72 50 45 65 30 |
| 7 | 85 | 90 72 85 45 65 30 50 |

## Final Max Heap

```text
        90
       /  \
     72    85
    /  \   / \
   45  65 30 50
