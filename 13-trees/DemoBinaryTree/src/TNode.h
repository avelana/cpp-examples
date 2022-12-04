//
// Created by volha on 12/13/2021.
//

#ifndef DEMOBINARYTREE_SRC_TNODE_H_
#define DEMOBINARYTREE_SRC_TNODE_H_

struct TNode {
public:
    TNode(int key) : key_(key), left_(nullptr), right_(nullptr) { }

    int key_;
    TNode* left_;
    TNode* right_;
};

#endif // DEMOBINARYTREE_SRC_TNODE_H_
