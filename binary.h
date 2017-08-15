#ifndef __BINARY_H__
#define __BINARY_H__
#include <iostream>
#include "expression.h"

class Binary: public Expression{
    std::string myex1;   //string1
    std::string myex2;   //string2
    std::string myoper;  //operator
    int myint1;   //integer1
    int myint2;   //integer2
    public:
        Binary(Expression *mye1, Expression *mye2, std::string myoper); //ctor
        std::string prettyprint(); //function prettyprint
        int evaluate();  //function evaluate
        ~Binary(){};//dtor
};
#endif
