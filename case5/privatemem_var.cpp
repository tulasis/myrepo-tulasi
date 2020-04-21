/*
filename:privatememfun.cpp
details: ways to intialize the private members in a class
author:tulasi
date:10/04/2020
*/
#include<iostream>
#include<string.h>
using namespace std;
//class Declaration
class init
{
    //private data member
	private:
    int a,c;
    double b,d;
    public:
    //directly initialize our member variables
	init() : a{1},b{2} 
    { }
    //directly initialize our member variables
	init(int a1,double b1):c{a1},d{b1}
    { }
    //print function
	void print()
    {
        cout<<c<<endl<<d<<endl;
    }
    
    //display function
	void display()
    {
        cout<<a<<endl<<b<<endl;
        
    }
};
int main(int argc,char **argv)
{
    
    //help command 
	if(argc == 2 && strcmp(argv[1], "-h")==0) 
   
    {
        cout<<"The main purpose of this program is to how to use & Declare Different way to initialize the private member variables in a class"<<endl;
    }
    else
    {
        init ob;
        // trying to access private data member directly outside the class
		ob.display();
        //c=10,d=20.12
		init init{10,20.12};
        init.print();
        
    }
    return 0;
}
