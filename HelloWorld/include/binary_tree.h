#pragma once

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    BinaryTree() : root(nullptr) {}
    ~BinaryTree();
    
    void insert(int val);
    bool find(int val) const;
    void clear();
    bool empty() const { return root == nullptr; }
    
private:
    TreeNode* root;
    void insert(TreeNode*& node, int val);
    bool find(TreeNode* node, int val) const;
    void clear(TreeNode* node);
};
