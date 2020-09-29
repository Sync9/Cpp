//
// Created by Iris on 9/28/2020.
//
#include "iostream"
#include "Node.h"
Node::Node() {
    data=0;
    next= nullptr;
}
void Node::setNext(Node *p) {
    next=p;
}
int Node::getData() {
    return  data;
}
Node* Node::getNext() {
    return next;
}
Node::~Node() {
    std::cout<<data<<" has been deconstructed"<<std::endl;
}
void Node::setData(int x) {
    data=x;
}