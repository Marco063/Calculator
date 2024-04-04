#include <string>
#include "Pile.cpp"
#include <iostream>
#include <cmath>

using namespace std;

class Calculator {
public:

    Calculator();

    bool isNumber(const string &str);

    vector<string> breakDown(string operation, bool type);

    double calculate (string operation);

    Pile<string>* operationPosFix(string operation);

    virtual ~Calculator();


};
