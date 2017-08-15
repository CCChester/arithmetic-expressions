#ifndef __UNARY_H__
#define __UNARY_H__
#include <iostream>
#include "expression.h"

class Unary: public Expression{
  std::string myoper; //operator
  public:
    Unary(Expression *exptr, std::string myoper); //ctor
    std::string prettyprint(); //function prettyprint()
    int evaluate(); //function evaluate()
    ~Unary(){};  //dtor
};
#endif
