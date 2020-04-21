/*
filename: varablescope.cpp
details: to know the usage of variable scope,modifier types,storage classes
author:tulasi
date:10/04/2020
*/
#include<iostream>
#include<string.h>
using namespace std;
//global variable
int iA=10; 
int iE;
extern int iEx=20;
//variable scope function
void scope() 
{
	//local variable
	int iB=20;
	cout<<"VARIABLE SCOPE"<<endl;
	cout<<"global variable a:"<<iA<<endl;   
	cout<<"local variable  b:"<<iB<<endl;
}
//modifier types function
void modifier() 
{
	//initialization of modifier types
	signed int iData=-30;
	unsigned int iUdata=40;
	long lData=12345678;
	short sData=100;
	cout<<"  MODIFIER TYPES   "<<endl;
	cout<<"signed int idata   : "<<iData<<endl;
	cout<<"unsigned int uidata: "<<iUdata<<endl;
	cout<<"long ldata         : "<<lData<<endl;
	cout<<"short sdata        : "<<sData<<endl;
}
//storage class function
void storage() 
{
	int iX=10;
    float fY=3.5;
    //addition of two variable with auto storage class as return type
	auto float fZ=iX+fY;
    cout<<"                     STORAGE CLASSES                         "<<endl;
    cout<<"value of auto variable z is                               : "<<fZ<<endl;
    //register storage classes initialization
	register int iR=10;             
    cout<<"address of register variable r is                         : "<<&iR<<endl;
    //extern storage class declaration
	extern int iE;                 
    cout<<"extern storage value before initialization is             : "<<iE<<endl;
    iE=20;
    cout<<"extern storage value after initialization is              : "<<iE<<endl;
    auto int iAe=iEx+iE;
    cout<<"value of ae after adding extern global & local variable is: "<<iAe<<endl;
    
}
//static storage class function
void staticstorage()  
{
    static int iS=100;          
    iS++;
    cout<<"static variable s is    :"<<iS<<endl;
}
//mutable class
class number  
{
	mutable int iNum;
	public:
		//getdata function which is kept as const
		void getdata() const 
		{
			iNum=10;
			iNum++;
		}
		//display function for displaying the mutable number
		void display() 
		{
			getdata();
			cout<<"mutable num :"<<iNum<<endl;
		
		}
};
int main(int argc,char *argv[])
{
    if(argc>=2)
    {
	    //display function for displaying the mutable number
		if(strcmp(argv[1],"-h")==0)				
	    {
            cout<<"variable scope,modifier types & storage classes"<<endl;
	    }
    }
    else
    {
        //calling functions
	    scope();
	    modifier();
	    storage();
	    staticstorage();
	    cout<<"* staticstorage variable after incrementation is *"<<endl;
	    staticstorage();
	    number n;
	    n.display();
    }
}
