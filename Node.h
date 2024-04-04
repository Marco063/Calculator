//
// Created by Marco Vargas and Miguel Alfonso on 27/06/2022.
//

#ifndef CALCULATOR_NODE_H
#define CALCULATOR_NODE_H

#include <cstdlib>

template <class T> class Pile;

template <class T>
class Node {
    friend class Pile<T>;
public:
    Node();
    Node(T info);

    virtual ~Node();

private:
    T info;
    Node<T>*next;
};

template <class T>
Node<T>::Node(){
    next = NULL;
}


template <class T>
Node<T>::Node(T info){
    Node::info = info;
    next = NULL;
}

template<class T>
Node<T>::~Node() {

}


#endif //CALCULATOR_NODE_H
