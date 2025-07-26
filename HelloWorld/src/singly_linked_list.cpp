#include "singly_linked_list.h"

SinglyLinkedList::~SinglyLinkedList() {
    clear();
}

void SinglyLinkedList::push_front(int val) {
    SLLNode* node = new SLLNode(val);
    node->next = head;
    head = node;
}

void SinglyLinkedList::pop_front() {
    if (head) {
        SLLNode* temp = head;
        head = head->next;
        delete temp;
    }
}

bool SinglyLinkedList::find(int val) const {
    SLLNode* current = head;
    while (current) {
        if (current->data == val) return true;
        current = current->next;
    }
    return false;
}

void SinglyLinkedList::clear() {
    while (head) {
        SLLNode* temp = head;
        head = head->next;
        delete temp;
    }
}
