//
// Created by cheng on 2023/2/17.
//

#ifndef DATASTRUCT_LIST_H
#define DATASTRUCT_LIST_H

struct List {

private:
    struct Node {
        Node():node_(0),next_(nullptr){};
        int node_;
        Node* next_;
    };

public:
    Node* head_;
    Node* tail_;
};
#endif //DATASTRUCT_LIST_H
