# DSA Assignment 2 - Question 1

## Hospital Priority Queue

### Subject
PCCST303 - Data Structures and Algorithms

### Problem

A hospital uses a priority queue to manage patients according to
severity. A higher severity score represents a higher priority.

### Patient Severity Scores

45, 72, 30, 90, 65, 50, 85

## Programs Implemented

1. Max Heap Insertion
2. Heap Sort
3. Quick Sort

## Max Heap

The final Max Heap is:

90 72 85 45 65 30 50

The highest-priority patient has severity score 90.

## Sorting Result

### Heap Sort

30 45 50 65 72 85 90

### Quick Sort

30 45 50 65 72 85 90

## Complexity Analysis

### Max Heap Insertion

Time Complexity: O(log n)

Space Complexity: O(n)

### Heap Sort

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n log n)

Space Complexity: O(1)

### Quick Sort

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n²)

Space Complexity: O(log n) average

## Conclusion

For a hospital priority queue where patients are continuously
inserted and the highest-severity patient is needed immediately,
Max Heap is suitable because the highest-priority patient is
maintained at the root of the heap.

## Files

- max_heap.c - Max Heap insertion program
- heap_sort.c - Heap Sort program
- quick_sort.c - Quick Sort program
- input.txt - Input data
- output.txt - Program output
- trace_table.md - Trace table
- comparison.md - Comparison and complexity analysis
