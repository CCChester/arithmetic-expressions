#include "binary.h"
#include <iostream> 
#include <string>
using namespace std;

/*  CTOR
 purpose: to initialize those value by CTOR
 return: NONE
*/
Binary::Binary(Expression *mye1, Expression *mye2, string myoper){
    this->myoper = myoper; //initialize a string
    myint1 = mye1->evaluate();  //value
    myint2 = mye2->evaluate();   //value
    myex1 = mye1->prettyprint();
    myex2 = mye2->prettyprint();
}//ctor

/* Binarry::evaluate()
  Purpose: To calculate the integer by string
  Return: a interger.
*/
int Binary::evaluate(){
    if(myoper == "*"){
        return myint1 * myint2;
    }//if
    else if(myoper == "+"){
        return myint1 + myint2;
    }//elif
    else if(myoper == "-"){
        return myint1 - myint2;
    }//elif
    else{
        return myint1/myint2;
    }//else
}

/* Binary::prettyprint()
  Purpose: get a stirng, then return for this type
  Return:
*/
string Binary::prettyprint(){
    string newone;  //initialize a string
    newone = "(" + myex1 + " " + myoper + " " +  myex2 + ")";
    return newone;
}
