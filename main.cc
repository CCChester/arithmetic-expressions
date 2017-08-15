#include <iostream>
#include <string>
#include <sstream>
#include "lone.h"
#include "unary.h"
#include "binary.h"
#include "expression.h"
#include "myexpress.h"
using namespace std;
int main(){
    int num;
    string str;
    myexpress mye;   //initialize a myexpress
	Expression *myex;
	while(true){
        cin >> str;   //read in a string
        if(cin.fail() && cin.eof()){
            break;
        }//if
	istringstream ss(str);
        if(ss.fail() && ss.eof()){  //if cannot convert
            break;
        }//if
        if(ss >> num){
            //read in a integer
            myex = new Lone(num);
            if(!mye.addin(myex)){
                break;
            }//if
	}
	else{
            ss >> str;  //read in another string
            if((str != "*") && (str != "-") && (str != "/") && (str != "+")){
                //if string is not one of above
                Expression *myex3 = mye.judge();
                myex = new Unary(myex3, str);  //new a myexpress
                delete myex3;
                if(!mye.addin(myex)){
                    break;
                }//if
            }//if
	    else{
                Expression *myex2 = mye.judge();
                Expression *myex1 = mye.judge();
                myex = new Binary(myex1, myex2, str); //get to myex myexpress array
                delete myex1;
                delete myex2;
                if(!mye.addin(myex)){
                    break;
                }//if
            }//else
	}//else
    }//while
    Expression *myfinalex = mye.judge(); //give value
    cout << myfinalex->prettyprint() << endl;
    cout << "= " << myfinalex->evaluate() << endl;
    delete myfinalex;
}//main
