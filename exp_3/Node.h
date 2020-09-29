//
// Created by Iris on 9/28/2020.
//

#ifndef CPP_EXP_3_NODE_H
#define CPP_EXP_3_NODE_H


class Node {
private:
    int data;
    Node* next;
public:
    Node();
    ~Node();
    void setNext(Node* p);
    int getData();
    Node* getNext();
    void setData(int x);
};


#endif //CPP_EXP_3_NODE_H
