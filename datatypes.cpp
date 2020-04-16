/*
filename: datetypes.cpp
details: Program to parse the command line and dispaly the output
author:tulasi
date:10/04/2020
*/
#include <iostream> 
#include<string.h>
#include<stdlib.h>
#include<cctype>
#include<typeinfo>
#include<bits/stdc++.h>
using namespace std; 
  
int main(int argc, char** argv) 
{ 
  
    //Declaring character datatype
    char ch; 
    //Declaring integer datatype
    int c,i;
    //Declaring double datatype
    double d;
    
    cout << "You have entered " << argc 
         << " arguments:" << "\n";
         
  //for loop to increase the i value with respect to argument counter
  for(i=1;i<argc;i++)
  {

        //if condition for checking whether the value greater than zero or not
        if(argv[i]>=0)
	{
		//atoi function accepts a string and convert to integer
		c=atoi(argv[i]);
		//atof function accepts a string and convert to float
		d=atof(argv[i]);
		cout<<"TYPE"<<"    "<<"value"<<"  "<<"size"<<endl;
		//if condition for comparing the values
		if(c==d) 
		{
                 cout<<"Integer"<<"   "<<c<<"   "<<sizeof(int)<<endl;
		}
		else
		{
		cout<<"Double"<<"   "<<d<<"    "<<sizeof(double)<<endl;
		}
	}
	else
	{
ch=atoi(argv[i]);
          if((ch==1))
	   {
	   cout<<sizeof(char);
	   }
	   else
	   {
	   cout<<sizeof(wchar_t);
	   }
	}
}
   return 0; 
}
