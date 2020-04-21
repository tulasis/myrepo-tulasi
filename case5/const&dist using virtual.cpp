/*
filename:virtual.cpp
details:construction and distruction using virtual function
author:tulasi
date:10/04/2020
*/
#include<iostream>
#include<string.h>
using namespace std;

//class creation
class A 
{
public:
    A() {
       
    }
    //virtual function 
    virtual void virtual_function()
	{
        cout<<"A::virtual_function called"<<endl;
    }
    //virtual destructor 
    virtual ~A()
    {
    }
};

class B : public A 
{
public:
    // override virtual function in A
    void virtual_function()
    {
        cout<<"B::virtual_function called"<<endl;
    }
};

int main(int argc, char **argv)
{
    
    //help command 
    if(argc == 2 && strcmp(argv[1], "-h")==0)  
   
    {
        cout<<"The main purpose of this program is to how to use & Declare the Local & Global scope variable"<<endl;
    }
    else{
    // Call to virtual_function during construction doesn't
    // behave like normal virtual function call.
    // Print statement shows it invokes A::virtual_function,
    // even though we are constructing an instance of B, not A.
     B myObject;

    // This call behaves like a normal virtual function call.
    // Print statement shows it invokes B::virtual_function.
    myObject.virtual_function();
}
}
