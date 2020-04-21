/*
filename:withoutvirtual.cpp
details:construction and destruction of a object without using virtual
author:tulasi
date:10/04/2020
*/
#include<iostream>
#include<string.h>
using namespace std;
class order
{
    // constructor
    public:
    order()
    {
        cout << "Constructor called"<<endl;
    }

    // destructor
    ~order()
    {
        cout << "Destructor called"<<endl;
    }
};

   
int main(int argc, char **argv)
{
    
    //help command  
    if(argc == 2 && strcmp(argv[1], "-h")==0) 
   
    {
        cout<<"The main purpose of this program is to how to use & Declare the order of construction and destruction of objects without using virtual functions"<<endl;
    }
    else{
    // Constructor Called
    order obj1;  
    // Constructor Called
	order obj2; 
     // Destructor Called for obj2
} //  Destructor called for obj1


}
