/*
filename: sumofnnum.cpp
details: sum of n natural numbers
author:tulasi
date:10/04/2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sqsum(int n)
{
    return(n*(n+1)/2)*(2*n+1)/3;
}
int main(int argc, char **argv)
{
    
     
    if(argc == 2 && strcmp(argv[1], "-h")==0) //help command 
   
    {
        cout<<"sum of squares of n natural numbers"<<endl;
    }
	else{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n>0)
	cout<<sqsum(n)<<endl;
	else
	cout<<"only positive numbers and try to enter integers only";
    return 0;
}
}
