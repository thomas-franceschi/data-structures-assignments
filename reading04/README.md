Reading 04
==========
 1. During the divide conquer of merge sortthe current list or sub-list is 
 divided in half. During the conquer part, the sub lists are then sorted 
 seperately and then merged together.

 2. During the partitioning phase of quicksort the numbers to the left 
 and right of the pivot are compared and rearranged so all of the numbers 
 less than the pivot are infront of it and all of the numbers larger than 
 it are behind it. The choice of pivot is important for efficiency because 
 a poor pivot could take many extra recursive steps to properly order the 
 rest of the numbers.

 3. An algorith is stable if it does not change the relative order of 
 records with identical values. This characteristic would be useful when 
 using a list where members of the same value can be considered 
 indistinguishable and consistent runtime is important. Merge sort is 
 stable because it preserves the order of equal elements in its sorted
 output. Quicksort isnot stable because it does not preserve the order 
 of equal elements in its output.

 4. 
 Mergesort:
 best: O(n logn)
 average: O(n logn)
 worst: O(n logn)

 Quicksort:
 best: O(n logn)
 average: O(n logn)
 worst: O(n^2)

 Most real world sorting implementations use quicksort because it uses 
 in-place sorting and conserves much more memory in relation to mergesort, 
 which can be a big issue as the number of elemtns grows. 