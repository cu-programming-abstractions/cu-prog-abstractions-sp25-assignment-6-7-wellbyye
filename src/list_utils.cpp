#include "list_utils.h"
#include "list.h"
#include <stdexcept>

/* length: returns number of nodes in the list */
int length(const LinkedList& list) {
    int count = 0;
    LinkedList::Node* curr = list.getHead();
    while (curr != nullptr) {
        count++;
        curr = curr->next;
    }
    return count;
}

/* sum: returns the sum of all values in the list */
int sum(const LinkedList& list) {
    int total = 0;
    LinkedList::Node* curr = list.getHead();
    while (curr != nullptr) {
        total += curr->data;
        curr = curr->next;
    }
    return total;
}

/* contains: checks if list contains value k */
bool contains(const LinkedList& list, int k) {
    LinkedList::Node* curr = list.getHead();
    while (curr != nullptr) {
        if (curr->data == k) return true;
        curr = curr->next;
    }
    return false;
}

/* reverse: reverses the list in place */
void reverse(LinkedList& list) {
    LinkedList::Node* prev = nullptr;
    LinkedList::Node* curr = list.getHead();
    while (curr != nullptr) {
        LinkedList::Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    list.setHead(prev);
}

/* nthFromEnd: returns nth element from end (0 = last) */
int nthFromEnd(const LinkedList& list, int n) {
    int len = length(list);
    if (n < 0 || n >= len) {
        throw std::out_of_range("Invalid n value");
    }

    int target = len - n - 1;
    LinkedList::Node* curr = list.getHead();
    for (int i = 0; i < target; i++) {
        curr = curr->next;
    }
    return curr->data;
}
