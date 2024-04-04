//
// Created by Marco Vargas and Miguel Alfonso on 27/06/2022.
//

#include "Pile.h"

template<class T>
Pile<T>::Pile() {
    top = NULL;
}

template<class T>
bool Pile<T>::isEmpty() {
    return  top == NULL;
}

template<class T>
void Pile<T>::Stack(T info) {
    Node<T>* newNode = new Node<T>(info);
    if(isEmpty()){
        top = newNode;
    }else{
        newNode->next = top;
        top = newNode;
    }
}

template<class T>
T Pile<T>::depile() {
    Node<T>* deleteNode = top;
    T out = top->info;
    top = deleteNode->next;
    delete(deleteNode);
    return out;
}

template<class T>
int Pile<T>::getSize() {
    Node<T>* pile = top;
    int cont = 1;
    if(pile == NULL){
        return 0;
    }else{
        while(pile != NULL){
            pile = pile->next;
            cont++;
        }
    }
    return cont;
}

template<class T>
T Pile<T>::getTop() {
    T out = top->info;
    return out;
}

template<class T>
T *Pile<T>::findInfo(std::string x) {
    Node<T>* aux = top;
    while(aux != NULL){
        if(aux->info.compare(x)==0){
            return &aux->info;
        }
        aux = aux->next;
    }
    return NULL;
}

template<class T>
Node<T> *Pile<T>::findNode(std::string x) {
    Node<T> *aux= top;
    while(aux != NULL){
        if(aux->info.compare(x)==0){
            return aux;
        }
        aux = aux->next;
    }
    return NULL;
}

template<class T>
std::vector<T> Pile<T>::getPile() {
    std::vector<T>out;
    Node<T>* aux = top;
    while(aux != NULL){
        out.push_back(aux->info);
        aux = aux->next;
    }
    return out;
}

template<class T>
Pile<T>::~Pile() {

}
