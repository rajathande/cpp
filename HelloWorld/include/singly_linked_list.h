#pragma once

struct SLLNode {
    int data;
    SLLNode* next;
    SLLNode(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
public:
    SinglyLinkedList() : head(nullptr) {}
    ~SinglyLinkedList();
    
    void push_front(int val);
    void pop_front();
    bool find(int val) const;
    void clear();
    bool empty() const { return head == nullptr; }
    
private:
    SLLNode* head;
};
