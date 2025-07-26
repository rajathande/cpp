#include "binary_tree.h"

BinaryTree::~BinaryTree() {
    clear();
}

void BinaryTree::insert(int val) {
    insert(root, val);
}

void BinaryTree::insert(TreeNode*& node, int val) {
    if (!node) {
        node = new TreeNode(val);
        return;
    }
    
    if (val < node->data) {
        insert(node->left, val);
    } else {
        insert(node->right, val);
    }
}

bool BinaryTree::find(int val) const {
    return find(root, val);
}

bool BinaryTree::find(TreeNode* node, int val) const {
    if (!node) return false;
    if (node->data == val) return true;
    
    if (val < node->data) {
        return find(node->left, val);
    } else {
        return find(node->right, val);
    }
}

void BinaryTree::clear() {
    clear(root);
    root = nullptr;
}

void BinaryTree::clear(TreeNode* node) {
    if (!node) return;
    
    clear(node->left);
    clear(node->right);
    delete node;
}
