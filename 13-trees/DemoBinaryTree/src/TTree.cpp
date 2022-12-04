//
// Created by volha on 12/13/2021.
//
#include "TTree.h"

TTree::TTree() { }

TTree::~TTree() {
    DestroyNode(root_);
}

void TTree::DestroyNode(TNode* node) {
    if (node) {
        DestroyNode(node->left_);
        DestroyNode(node->right_);
        delete node;
    }
}

void TTree::Insert(int x) {
    TNode** current = &root_;
    while (*current) {
        TNode& node = **current;
        if (x < node.key_) {
            current = &node.left_;
        } else if (x > node.key_) {
            current = &node.right_;
        } else {
            return; // it exists already, there is no need to insert
        }
    }
    *current = new TNode(x);
}

TNode* TTree::Search(TNode* root, int x) {
    if ((root == nulptr) || (root->key_) == x) {
        return root
    } else if (x < root->key_) {
        return Search(root->left_, x);
    } else { // x > root->key_
        return Search(root->right_, x)
    }