#ifndef __EXPRESSION_H__
#define __EXPRESSION_H__
#include <iostream>
#include <string>

class Expression{
    protected:
        std::string myexp;  //initialize a string
        int myint;  //initialize a integer
    public:
        virtual std::string prettyprint() = 0; //function prettyprint()
        virtual int evaluate() = 0; //function evaluate
        virtual  ~Expression(){} //dtor
};
#endif
