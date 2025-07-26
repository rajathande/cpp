#pragma once

struct DLLNode {
    int data;
    DLLNode* prev;
    DLLNode* next;
    DLLNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    ~DoublyLinkedList();
    
    void push_back(int val);
    void push_front(int val);
    void pop_back();
    void pop_front();
    bool find(int val) const;
    void clear();
    bool empty() const { return head == nullptr; }
    
private:
    DLLNode* head;
    DLLNode* tail;
};
