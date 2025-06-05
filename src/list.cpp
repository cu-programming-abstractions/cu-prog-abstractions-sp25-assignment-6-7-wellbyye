#include "list.h"
#include <iostream>
#include <stdexcept>
using namespace std;

/* Constructor */
LinkedList::LinkedList() {
    head = nullptr;
}

/* Copy constructor */
LinkedList::LinkedList(const LinkedList& other) {
    head = deepCopy(other.head);
}

/* Assignment operator */
LinkedList& LinkedList::operator=(LinkedList rhs) {
    if (this != &rhs) {
        std::swap(head, rhs.head);
    }
    return *this;
}

/* Destructor */
LinkedList::~LinkedList() {
    freeChain(head);
    head = nullptr;
}

/* prepend: insert at head */
void LinkedList::prepend(int value) {
    Node* newNode = new Node(value);
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

/* append: insert at tail */
void LinkedList::append(int value) {
    Node* newNode = new Node(value);
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

/* removeFront: remove from head and return value */
int LinkedList::removeFront() {
    if (isEmpty()) {
        throw runtime_error("Cannot remove from empty list.");
    }
    Node* oldHead = head;
    int value = oldHead->data;
    head = head->next;
    delete oldHead;
    return value;
}

/* isEmpty: check if list is empty */
bool LinkedList::isEmpty() const {
    return head == nullptr;
}

/* print: output list to ostream */
void LinkedList::print(ostream& out) const {
    Node* curr = head;
    while (curr != nullptr) {
        out << curr->data;
        if (curr->next != nullptr) {
            out << " → ";
        }
        curr = curr->next;
    }
    out << endl;
}

/* deepCopy: recursively copies a chain of nodes */
LinkedList::Node* LinkedList::deepCopy(Node* src) {
    if (src == nullptr) return nullptr;

    Node* newHead = new Node(src->data);
    Node* currNew = newHead;
    Node* currOld = src->next;

    while (currOld != nullptr) {
        currNew->next = new Node(currOld->data);  // Use currOld->data here
        currNew = currNew->next;
        currOld = currOld->next;
    }

    return newHead;
}

/* freeChain: deletes entire chain of nodes */
void LinkedList::freeChain(Node* n) {
    while (n != nullptr) {
        Node* next = n->next;
        delete n;
        n = next;
    }
}

