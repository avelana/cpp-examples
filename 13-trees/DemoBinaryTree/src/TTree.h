//
// Created by volha on 12/13/2021.
//

#ifndef DEMOBINARYTREE_SRC_TTREE_H_
#define DEMOBINARYTREE_SRC_TTREE_H_
#include "TNode.h"

class TTree {
public:
    TTree() : root_(nullptr);
    ~TTree();
    std::string ToString(std::string& delimetre);

private:
    static void DestroyNode(TNode* node);

private:
    TNode* root_;
};

#endif // DEMOBINARYTREE_SRC_TTREE_H_
