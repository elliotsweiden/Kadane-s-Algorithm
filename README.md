# Kadane-s-Algorithm
ALgorithm, which is a masterpiece!
In computer science, the maximum subarray problem is the task of finding the contiguous subarray within a one-dimensional array, a[1...n],
of numbers which has the largest sum. 
Maximum subarray algorithms are used for data analysis in many fields,
such as genomic sequence analysis, computer vision, and data mining.
First algorithm is brute-force algorithm with runtime complexity of O(n^2).
Second algorithm  is implemented with the method of divide and conquer with runtime complexity O(nlogn).
But Kadane's algorithm is the best of them.
Kadane's algorithm begins with a simple inductive question:
if we know the maximum subarray sum ending at position i (call this B{i}), what is the maximum subarray sum ending at position i+1 (equivalently, what is B{i+1}).
The answer turns out to be relatively straightforward: either the maximum subarray sum ending at position i+1 includes the maximum subarray
sum ending at position i as a prefix, or it doesn't (equivalently, B{i+1}= max ( A{i+1}, A{i+1} + B{i} ), where A{i+1} is the element at index (i+1).
The runtime complexity of Kadane's algorithm is O(n).
