//
// Created by Iris on 9/28/2020.
//
#include "iostream"
#include "Link.h"
Link::Link() {
    head= nullptr;
    num=0;
}
Link::Link(int x){
    Link_Insert(x);
}
void Link::LinkPrint() {
    if(num==0) std::cout<<"Empty Linked List"<<std::endl;
    else {
        std::cout<<"The data in the ordered linked list is as follows"<<std::endl;
        Node *ptr = head;
        while (ptr) {
            std::cout << ptr->getData()<<"\t";
            ptr = ptr->getNext();
        }
        std::cout<<std::endl;
    }
}
void Link::Link_Insert(int x) {
    if(num==0) {
        head=new Node();
        head->setData(x);
    }
    else{
        Node* node=new Node();
        node->setData(x);
        Node * cur= head;
        Node * pri= head;
        while(cur&&cur->getData()<x){
            pri=cur;
            cur=cur->getNext();
        }
        if(cur == nullptr) pri->setNext(node);
        else{
            if(cur==pri){
                head=node;
            }else{
                pri->setNext(node);
            }
            node->setNext(cur);
        }
    }
    num++;
}
Node* Link::getHead() {
    return head;
}
void Link::Link_Delete(int x) {
    if(num==0) {
        std::cout<<"Empty Linked List"<<std::endl;
    }else {
        Node *cur = head;
        Node *pri = head;
        while (cur && cur->getData() != x) {
            pri = cur;
            cur = cur->getNext();
        }
        pri->setNext(cur->getNext());
        delete cur;
        num--;
        pri= nullptr;
        delete pri;
    }
}
Link::~Link() {
    if(num!=0){
        Node* ptr=head;
        while(ptr){
            head=ptr;
            delete head;
            ptr=ptr->getNext();
        }
    }
}
void Link::Link_Connect(Link &p) {
    Node *ptr=p.head;
    while(ptr->getNext()){
        ptr=ptr->getNext();
    }
    Node *ptr_this=head;
    Node *node;
    while(ptr_this){
        node=new Node();
        node->setData(ptr_this->getData());
        ptr->setNext(node);
        p.num++;
        ptr=ptr->getNext();
        ptr_this=ptr_this->getNext();
    }
}