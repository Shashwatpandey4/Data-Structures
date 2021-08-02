# Arrays

### What is an Array ?

An array is a collection of elements of the same type placed in contiguous memory locations that can be individually referenced by using an index to a unique identifier.

There are 2 types of arrays static & dynamic
Static array : is a fixed length container containing n elements indexable from the range [0,n-1].

### When & Where it is used ?

1. sorting and accessing sequential data
2. temporarily storing objects
3. used by IO routines as buffers
4. lookup tables & inverse lookup tables
5. can be used to return multiple values from a function
6. used in dynamic programming to cache answers to subproblems

 Note : a lookup table is an array that replaces runtime computation with a simpler array indexing operation.

### Complexity

||Static Array|Dynamic Array|
|---|---|---|
|Access|O(1)|O(1)|
|Search|O(n)|O(n)|
|Insertion|N/A|O(n)|
|Appending|N/A|O(1)|
|Deletion|N/A|O(n)|




|Array A = |44|67|89|54|37|
|--|--|--|--|--|--|
|index|0|1|2|3|4|
