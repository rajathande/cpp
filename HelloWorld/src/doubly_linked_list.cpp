#include "doubly_linked_list.h"

DoublyLinkedList::~DoublyLinkedList() {
    clear();
}

void DoublyLinkedList::push_back(int val) {
    DLLNode* node = new DLLNode(val);
    if (!tail) {
        head = tail = node;
    } else {
        node->prev = tail;
        tail->next = node;
        tail = node;
    }
}

void DoublyLinkedList::push_front(int val) {
    DLLNode* node = new DLLNode(val);
    if (!head) {
        head = tail = node;
    } else {
        node->next = head;
        head->prev = node;
        head = node;
    }
}

void DoublyLinkedList::pop_back() {
    if (!tail) return;
    
    DLLNode* temp = tail;
    tail = tail->prev;
    if (tail) {
        tail->next = nullptr;
    } else {
        head = nullptr;
    }
    delete temp;
}

void DoublyLinkedList::pop_front() {
    if (!head) return;
    
    DLLNode* temp = head;
    head = head->next;
    if (head) {
        head->prev = nullptr;
    } else {
        tail = nullptr;
    }
    delete temp;
}

bool DoublyLinkedList::find(int val) const {
    DLLNode* current = head;
    while (current) {
        if (current->data == val) return true;
        current = current->next;
    }
    return false;
}

void DoublyLinkedList::clear() {
    while (head) {
        DLLNode* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
}
