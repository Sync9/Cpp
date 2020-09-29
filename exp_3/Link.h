//
// Created by Iris on 9/28/2020.
//
#ifndef CPP_EXP_3_LINK_H
#define CPP_EXP_3_LINK_H
#include "Node.h"

class Link{
private:
    Node* head;
    int num;
public:
    Link();
    Link(int n);
    void LinkPrint();
    Node* getHead();
    ~Link();
    void Link_Insert(int x);
    void Link_Delete(int x);
    void Link_Connect(Link &p);
};


#endif //CPP_EXP_3_LINK_H
