#include <iostream> 
#include<string.h>
#include<stdlib.h>
#include<cmath>
using namespace std; 
int main(int argc, char** argv) 
{ 
 if(argc == 2 && strcmp(argv[1], "-h")==0) //help command 
   
    {
        cout<<"The main purpose"<<endl;
    }
    else {
        
	for (int i = 1; i < argc; ++i) {
		cout << argv[i]<<' ' ;
    
    if (((strlen(argv[i]))==1) && (*argv[i]>='a'&& *argv[i]<='z') || (*argv[i]>='A' && *argv[i]<='Z'))
   {
       cout<<sizeof(char);
   }
   else if((strlen(argv[i]))!=1)
   {
       cout<<sizeof(string);
   }
    //atoi function accepts a string and convert to integer
   else if(atoi(argv[i])>=0 && atoi(argv[i])<=9)
   {
       cout<<sizeof(int);
   }
   //atof function accepts a string and convert to float
   else if((atof(argv[i]))==(atof(argv[i])) )
   {
       cout<<sizeof(double);
   }
   cout << "\n" ;
	}
	return 0; 
}
}
