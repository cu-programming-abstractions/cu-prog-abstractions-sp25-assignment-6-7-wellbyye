#include "list_utils.h"
#include "list.h"

/* TODO: Each function below currently returns dummy data.
         Replace with real implementations. */

/* TODO: length implementation
 * Calculate and return the number of nodes in the linked list.
 * Steps:
 * 1. Initialize a counter to 0
 * 2. Traverse the list from head to end
 * 3. Increment counter for each node visited
 * 4. Return the final count
 * 
 * Example:
 * For list [1 → 2 → 3]
 * length() should return 3
 * 
 * Time complexity: O(n) where n is the number of nodes
*/
int length(const LinkedList& /*list*/) {
    return 0;
}

/* TODO: sum implementation
 * Calculate and return the sum of all values in the linked list.
 * Steps:
 * 1. Initialize a sum variable to 0
 * 2. Traverse the list from head to end
 * 3. Add each node's value to the sum
 * 4. Return the final sum
 * 
 * Example:
 * For list [1 → 2 → 3]
 * sum() should return 6
 * 
 * Time complexity: O(n) where n is the number of nodes
*/
int sum(const LinkedList& /*list*/) {
    return 0;
}

/* TODO: contains implementation
 * Check if the linked list contains a specific value.
 * Steps:
 * 1. Traverse the list from head to end
 * 2. For each node, check if its value equals k
 * 3. Return true if found, false if not found
 * 
 * Example:
 * For list [1 → 2 → 3]
 * contains(2) should return true
 * contains(4) should return false
 * 
 * Time complexity: O(n) where n is the number of nodes
*/
bool contains(const LinkedList& /*list*/, int /*k*/) {
    return false;
}

/* TODO: reverse implementation
 * Reverse the linked list in-place.
 * Steps:
 * 1. Initialize three pointers: prev = null, curr = head, next = null
 * 2. While curr is not null:
 *    a. Save next node
 *    b. Reverse current node's pointer
 *    c. Move prev and curr one step forward
 * 3. Update head to point to the last node
 * 
 * Example:
 * If list is [1 → 2 → 3]
 * After reverse() it should be [3 → 2 → 1]
 * 
 * Time complexity: O(n) where n is the number of nodes
 * Space complexity: O(1) as we only use a constant amount of extra space
*/
void reverse(LinkedList& /*list*/) {
    /* your code */
}

/* TODO: nthFromEnd implementation
 * Find the value of the nth node from the end of the list.
 * Steps:
 * 1. First, find the length of the list
 * 2. Calculate the position from the start (length - n - 1)
 * 3. Traverse to that position
 * 4. Return the value at that position
 * 
 * Example:
 * For list [1 → 2 → 3 → 4 → 5]
 * nthFromEnd(0) should return 5 (last element)
 * nthFromEnd(2) should return 3 (third from end)
 * 
 * Note: If n is invalid (negative or >= length), throw an exception
 * 
 * Time complexity: O(n) where n is the number of nodes
*/
int nthFromEnd(const LinkedList& /*list*/, int /*n*/) {
    /* your code */
    return 0;
}
