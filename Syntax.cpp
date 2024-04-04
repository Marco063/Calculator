//
// Created by Marco on 2/07/2022.
//

#include "Syntax.h"

Syntax::Syntax() {

}

bool Syntax::isCorrect(std::string operation) {
    if (!haveLetters(operation)){
        Pile<char> *aux = new Pile<char>();
        for (int i = 0; i < operation.length(); ++i) {
            if (operation[i] == '('){
                aux->Stack(operation[i]);
            }else if(operation[i] == ')'){
                if(!aux->isEmpty()){
                    aux->depile();
                }else{
                    return false;
                }
                return true;
            }
        }
        if(aux->isEmpty()){
            return true;
        }else{
            return false;
        }

    }else{
        return false;
    }

}

bool Syntax::haveLetters(std::string operation) {
    if(!operation.empty()){
        for (int i = 0; i < operation.length(); ++i) {
        if(std::isalpha(operation[i])) {
            return true;
         }
        }
        return false;

    }
    return true;
}

Syntax::~Syntax() {

}



