#include<bits/stdc++.h>

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std; 

  
  void encrypt(char* ckey,char* filename) 
    { 
        string str;
         if(strcmp(filename,"a.txt")==0)
        {
        //opening sample for reading data
        ifstream myfile ("a.txt");
  
        
        //opening file to write encrypted data
         ofstream outfile ("encrypt.txt");
        if (outfile.is_open())
         {
            //setting the key for further decryption
           
 	        if (myfile.is_open())
		     {
		        
		         getline (myfile,str);
		         reverse(str.begin(), str.end()); 
		         
                       outfile<<str<<endl;
	                   			
			        	}
			    
         }
		
			myfile.close();
			outfile.close();
        
	    	}
	
        
 }
 
  void decrypt(char* ckey,char* filename) 
    { 
        string str;
         if(strcmp(filename,"encrypt.txt")==0)
        {
        //opening sample for reading data
        ifstream myfile ("encrypt.txt");
  
        
        //opening file to write encrypted data
         ofstream outfile ("decrypt.txt");
        if (outfile.is_open())
         {
            //setting the key for further decryption
           
 	        if (myfile.is_open())
		     {
		         getline (myfile,str);
		         
		   reverse(str.begin(), str.end()); 
            		         
                       outfile<<str<<endl;
	                     			
			        	}
			    
         }
		
			myfile.close();
				outfile.close();	
        
	    	}
	
 }
 
int main(int argc, char *argv[])
{
     if(argc==2)
    {
         //created a help command
        if(strcmp(argv[1],"-h")==0)
        {
            cout<<"enter -e/-d -f filename and -k key "<<endl;
            return 0;
        }
    }
    else if(argc>2)
    {
        if(strcmp(argv[1],"-e")==0)
        {
            if(strcmp(argv[2],"-f")==0)
            {
                encrypt(argv[5],argv[3]);
                return 0;
            }
            else if(strcmp(argv[2],"-k")==0)
            {
               encrypt(argv[3],argv[5]);
            }
        }
       else if(strcmp(argv[1],"-d")==0)
        {
            
            if(strcmp(argv[2],"-f")==0)
            {
                decrypt(argv[5],argv[3]);
                return 0;
            }
            else if(strcmp(argv[2],"-k")==0)
            {
                decrypt(argv[3],argv[5]);
                return 0;
            }
        }
        else 
        {
            cout<<"you have entered wrong format!!"<<endl;
           
            return 0;
        }
       
    }
    
   
}
