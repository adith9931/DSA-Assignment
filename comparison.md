# Comparison and Complexity Analysis - Question 1

## Heap Sort vs Quick Sort

| Feature | Heap Sort | Quick Sort |
|---|---|---|
| Best Case | O(n log n) | O(n log n) |
| Average Case | O(n log n) | O(n log n) |
| Worst Case | O(n log n) | O(n²) |
| Extra Space | O(1) | O(log n) average |
| Stable | No | No |

## Max Heap

A Max Heap is a complete binary tree in which the parent node
is greater than or equal to its children.

For 7 patients, the heap height is:

Height = floor(log2(7)) = 2

## Max Heap Insertion

Time Complexity: O(log n)

Space Complexity: O(n)

## Heap Sort

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n log n)

Space Complexity: O(1)

## Quick Sort

Best Case: O(n log n)

Average Case: O(n log n)

Worst Case: O(n²)

Space Complexity: O(log n) average

## Conclusion

For a hospital priority queue where patients are continuously
inserted and the highest-severity patient is needed immediately,
Max Heap is suitable because the highest-priority patient is
maintained at the root of the heap.
