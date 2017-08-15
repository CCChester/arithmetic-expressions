#ifndef __LONE_H__
#define __LONE_H__
#include "expression.h"
#include <iostream>
#include <string>

class Lone: public Expression{
    int myint; //initialize a integer
    public:
        Lone(int myint): myint(myint) { } //ctor
        std::string prettyprint();
        int evaluate();
        ~Lone(){} //dtor
};
#endif
