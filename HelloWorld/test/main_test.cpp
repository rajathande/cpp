#include <gtest/gtest.h>
#include "singly_linked_list.h"
#include "doubly_linked_list.h"
#include "binary_tree.h"

// Singly Linked List Tests
TEST(SinglyLinkedListTest, BasicOperations) {
    SinglyLinkedList list;
    EXPECT_TRUE(list.empty());
    
    list.push_front(1);
    EXPECT_FALSE(list.empty());
    EXPECT_TRUE(list.find(1));
    
    list.push_front(2);
    EXPECT_TRUE(list.find(2));
    
    list.pop_front();
    EXPECT_FALSE(list.find(2));
    EXPECT_TRUE(list.find(1));
}

// Doubly Linked List Tests
TEST(DoublyLinkedListTest, BasicOperations) {
    DoublyLinkedList list;
    EXPECT_TRUE(list.empty());
    
    list.push_back(1);
    EXPECT_FALSE(list.empty());
    EXPECT_TRUE(list.find(1));
    
    list.push_front(2);
    EXPECT_TRUE(list.find(2));
    
    list.pop_back();
    EXPECT_FALSE(list.find(1));
    EXPECT_TRUE(list.find(2));
    
    list.pop_front();
    EXPECT_TRUE(list.empty());
}

// Binary Tree Tests
TEST(BinaryTreeTest, BasicOperations) {
    BinaryTree tree;
    EXPECT_TRUE(tree.empty());
    
    tree.insert(5);
    EXPECT_FALSE(tree.empty());
    EXPECT_TRUE(tree.find(5));
    
    tree.insert(3);
    tree.insert(7);
    EXPECT_TRUE(tree.find(3));
    EXPECT_TRUE(tree.find(7));
    EXPECT_FALSE(tree.find(4));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}