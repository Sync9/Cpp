#include <iostream>
#include "Link.h"
int main() {
    Link* l1=new Link();
    l1->Link_Insert(1);
    l1->Link_Insert(3);
    l1->Link_Insert(2);
    Link* l2=new Link();
    l2->Link_Insert(4);
    l2->Link_Insert(5);
    l2->Link_Insert(6);
    l2->Link_Connect(*l1);
    l1->LinkPrint();
    delete l1;
    delete l2;
    return 0;
}
