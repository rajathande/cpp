#include <iostream>
#include "singly_linked_list.h"
#include "doubly_linked_list.h"
#include "binary_tree.h"

int main() {
    std::cout << "\nDemonstrating Singly Linked List:" << std::endl;
    SinglyLinkedList sll;
    sll.push_front(3);
    sll.push_front(2);
    sll.push_front(1);
    std::cout << "Finding values: " << std::endl;
    std::cout << "1: " << (sll.find(1) ? "found" : "not found") << std::endl;
    std::cout << "2: " << (sll.find(2) ? "found" : "not found") << std::endl;
    std::cout << "4: " << (sll.find(4) ? "found" : "not found") << std::endl;

    std::cout << "\nDemonstrating Doubly Linked List:" << std::endl;
    DoublyLinkedList dll;
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    std::cout << "Finding values: " << std::endl;
    std::cout << "1: " << (dll.find(1) ? "found" : "not found") << std::endl;
    std::cout << "3: " << (dll.find(3) ? "found" : "not found") << std::endl;
    std::cout << "5: " << (dll.find(5) ? "found" : "not found") << std::endl;

    std::cout << "\nDemonstrating Binary Tree:" << std::endl;
    BinaryTree bt;
    bt.insert(5);
    bt.insert(3);
    bt.insert(7);
    std::cout << "Finding values: " << std::endl;
    std::cout << "3: " << (bt.find(3) ? "found" : "not found") << std::endl;
    std::cout << "7: " << (bt.find(7) ? "found" : "not found") << std::endl;
    std::cout << "4: " << (bt.find(4) ? "found" : "not found") << std::endl;

    return 0;
}
