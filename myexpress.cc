#include "myexpress.h"
#include <string>
#include <iostream>
using namespace std;
int count = 0; //initialize a count value

Expression* myexpress::judge(){
    count = count - 1;
    return myarr[count]; //set up
}

/* addin
 purpose: add a expression in the myexpress array
 returns: boolean
*/
bool myexpress::addin(Expression *myex){
    if(count <= 9){
        myarr[count] = myex;
        count = count + 1;
        return true;
    }//if
    else if(count > 9){
        int index = 0;
        while(index < 100){
            myarr[index] = NULL;
        }//while
	return false;
    }//else
}//bool
