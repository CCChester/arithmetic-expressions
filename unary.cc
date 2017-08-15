#include "unary.h"
#include <iostream>
using namespace std;

/* CTOR
 purpose: initialize fields
 returns: non
*/
Unary::Unary(Expression *exptr, string myoper){
    this->myoper = myoper; //initialize operator
    myexp = exptr->prettyprint();
    myint = exptr->evaluate();
}//ctor

/* Unary::evaluate()
 purpose: calculate the integer by different operator
 returns: a integer
*/
int Unary::evaluate(){
    if(myoper != "ABS"){  //if not "ABS"
       return -1 * myint;
    }//if
    else if(myoper == "ABS"){
        if(myint <= 0){
            return -1 * myint;
        }//if
        else{
            return myint;
        }
    }//if
    return 0;
}

/* Unary::prettyprint()
 purpose: call prettyprint()
 returns: a string
*/
string Unary::prettyprint(){
    string newone; //initialize a string
    if(myoper == "NEG"){  //if equal "NEG"
        newone = "-" + myexp;
    }//if
    else if(myoper == "ABS"){
        newone = "|" + myexp + "|";
    }//else
    return newone;
}
