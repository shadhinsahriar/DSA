# Vector Notes

## What is Vector?

* Dynamic array.
* Size can increase or decrease during runtime.
* Elements are stored in contiguous memory.
* Random access is O(1).

## Common Mistakes

### Accessing Invalid Index

* Valid indices are from `0` to `size() - 1`.
* Accessing beyond this range causes undefined behavior.

### Using `front()` or `back()` on Empty Vector

* Always ensure the vector is not empty before using them.

### Calling `pop_back()` on Empty Vector

* This is undefined behavior.

### Iterator Invalidations

* After some operations like insertions or deletions, previously stored iterators may become invalid.

### Erasing While Iterating

* Be careful when removing elements during traversal.
* Iterator positions can change.

### Confusing Size and Capacity

* `size` = current number of elements.
* `capacity` = allocated storage.

### Forgetting Vector is Passed by Value

* Passing a vector by value creates a copy.
* Large vectors can make programs slower.

### Assuming Insert/Erase is O(1)

* Insertion or deletion in the middle usually shifts elements.
* Complexity is O(n).

### Storing References to Elements

* Vector reallocation can invalidate references and pointers.

## CP Tips

* Use vector instead of large local arrays.
* Use range-based loops for readability.
* Use `size()` instead of manually tracking element count.
* Prefer `push_back()` for appending elements.
* Think carefully before using insert/erase inside large loops.

## Time Complexity to Remember

* Access by index → O(1)
* push_back → O(1) amortized
* pop_back → O(1)
* size → O(1)
* insert → O(n)
* erase → O(n)
