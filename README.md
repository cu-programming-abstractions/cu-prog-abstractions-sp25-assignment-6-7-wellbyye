# Linked List Implementation Assignment

This assignment focuses on implementing a singly linked list data structure in C++. You will implement both core linked list operations and utility functions that operate on linked lists.

## Project Structure

The project consists of the following files:
- `src/list.h` - Header file containing the LinkedList class definition
- `src/list.cpp` - Implementation of core LinkedList operations
- `src/list_utils.h` - Header file for utility functions
- `src/list_utils.cpp` - Implementation of utility functions

## Implementation Tasks

### Core LinkedList Operations (list.cpp)

1. **Copy Constructor**
   - Implement deep copy functionality
   - Create new nodes for each element in the source list
   - Maintain the same order of elements
   - Handle empty list case

2. **Assignment Operator**
   - Implement using copy-and-swap idiom
   - Ensure strong exception safety
   - Handle self-assignment correctly
   - Properly manage memory

3. **append()**
   - Add a new node at the end of the list
   - Handle empty list case
   - Maintain proper linking

4. **removeFront()**
   - Remove and return the first element
   - Handle empty list case (throw exception)
   - Properly manage memory
   - Update head pointer

5. **deepCopy()**
   - Create a deep copy of a linked list
   - Handle null input case
   - Create new nodes with same data
   - Maintain proper linking

### Utility Functions (list_utils.cpp)

1. **length()**
   - Count number of nodes in the list
   - Handle empty list case
   - Time complexity: O(n)

2. **sum()**
   - Calculate sum of all values in the list
   - Handle empty list case
   - Time complexity: O(n)

3. **contains()**
   - Check if a value exists in the list
   - Return true if found, false otherwise
   - Time complexity: O(n)

4. **reverse()**
   - Reverse the list in-place
   - Use constant extra space
   - Time complexity: O(n)
   - Space complexity: O(1)

5. **nthFromEnd()**
   - Find the nth element from the end
   - Handle invalid n values (throw exception)
   - Time complexity: O(n)

## Testing

The project includes test cases to verify your implementation. Make sure to:
1. Run all tests to verify your implementation
2. Handle edge cases properly
3. Ensure memory management is correct
4. Verify time and space complexity requirements

## Memory Management

Pay special attention to:
- Proper allocation and deallocation of nodes
- No memory leaks
- No dangling pointers
- Proper handling of copy operations

## Tips

1. Start with the core operations before moving to utilities
2. Test each function thoroughly
3. Use the debugger to track pointer operations
4. Consider edge cases:
   - Empty list
   - Single element list
   - Invalid inputs
   - Self-assignment
   - Memory management

## Getting Started

1. Review the header files to understand the interface
2. Implement one function at a time
3. Test each function as you implement it
4. Use the provided test cases to verify your implementation

## Submission

Submit your implementation of:
- `list.cpp`
- `list_utils.cpp`

Make sure your code:
- Compiles without warnings
- Passes all test cases
- Follows the provided interface
- Includes proper error handling
