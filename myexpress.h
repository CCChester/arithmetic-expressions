#ifndef __MYEXPRESS_H__
#define __MYEXPRESS_H__
#include <iostream>
#include "expression.h"
#include <iostream>

class myexpress{
	Expression *myarr[100]; //initialize a array of 100 fields
	public:
	   bool addin(Expression *myex); //add function
 	   Expression *getStk() const;  //get
  	   Expression *judge();
};
#endif
