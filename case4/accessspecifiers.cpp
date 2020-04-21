/*
filename: accessspecifier.cpp
details: to illustrate the accessspecifers
author:tulasi
date:10/04/2020
*/
#include <iostream>
#include<string.h>
using namespace std;
//base class
class base
{
 	private:
        int J;
 	protected:
 	    int K;
 	public:
 	    int L;
 	//base constructor
	 base()
 	{
 	   J = 1;
 	   K = 2;
 	   L = 3;
 	}
};
//k and l becomes private members of class derived and j remains as private
class derived:private base 					
{
 	public:
 	    void showdata()
 	    {
 	        cout << "Using Accessmode as private " << endl;
            cout << "j cannot be not accessible because we declared as private"<<endl;
            cout <<  "value of k is"<<K<<endl;
            cout <<  "value of l is"<<L<<endl;
 	    }
};
//k and l becomes protected members of class derived1 and j remains as private 
class derived1:protected base
{
 	public:
 	    void showdata()
 	    {
 	        cout<<"Using Accessmode as protected"<< endl;
 	        cout <<"j is not Accessible because we declared as private"<< endl;
            cout <<"value of k is"<<K<<endl;
            cout <<"value of l is"<< L << endl;
 	    }
};
//k and l becomes public members of class derived2 and j remains as private 
class derived2:public base 
{
 	public:
 	    void showdata()
 	    {
 	        cout<<"Using Accessmode as public"<<endl;
 	        cout<<"j is not Accessible because we declared as private" << endl;
            cout<<"value of k is"<<K<<endl;
            cout<<"value of l is"<<L<<endl;
 	    }
};
int main(int argc,char *argv[])
{
    if(argc>=2)
    {
	    //if loop for comparing the input string with "-h"
		if(strcmp(argv[1],"-h")==0)				
	    {
            cout<<"	usage of access specifiers	"<<endl;
	    }
    }
	else
	{
		//derived object creation
		derived a;
    	derived1 b;
    	derived2 c;
    	//accessing data using object
		a.showdata();
    	b.showdata();
    	c.showdata();
    	return 0;
	}
}
