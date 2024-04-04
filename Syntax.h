//
// Created by Marco Vargas and Miguel Alfonso on 2/07/2022.
//

#ifndef CALCULATOR_SYNTAX_H
#define CALCULATOR_SYNTAX_H

#include <cctype>
#include "Calculator.h"

class Syntax {
public:
    Syntax();

    bool isCorrect(std::string);
    bool haveLetters(std::string);

    virtual ~Syntax();
};




#endif //CALCULATOR_SYNTAX_H
