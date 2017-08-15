#include "lone.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/* Lone::prettyprint()
 purpose: call this function
 returns: a string
*/
string Lone::prettyprint(){
    string mystr; //initialize a string
    stringstream convert; //convert it
    convert << myint;
    mystr = convert.str();
    return mystr; //return it
}

/* Lone::evaluate()
 purpose: calculate
 returns: a integer
*/
int Lone::evaluate(){
    return myint;
}
