//
// Created by karen on 10/11/2021.
//

#ifndef EXAMPLECLASSCPP_NODE_H
#define EXAMPLECLASSCPP_NODE_H

#include <cstdlib>

template <class T> class LinkedList;

template <class T>

class Node {
    friend class LinkedList<T>;

public:
    Node(T info) : info(info) {
        next = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;

};

#endif //EXAMPLECLASSCPP_NODE_H
