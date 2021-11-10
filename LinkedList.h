//
// Created by karen on 10/11/2021.
//

#ifndef EXAMPLECLASSCPP_LINKEDLIST_H
#define EXAMPLECLASSCPP_LINKEDLIST_H

#include <vector>
#include "Node.h"

template <class T>

class LinkedList {
public:
    LinkedList();

    bool isEmpty();

    void addNodeFirst( T );

    void addNodeLast( T );

    std::vector<T> getLinkedList();

    virtual ~LinkedList();

private:
    Node<T>* head;
};

#endif //EXAMPLECLASSCPP_LINKEDLIST_H
