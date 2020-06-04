#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
vector<string> letterCombinations(string digits) 
{
    vector<string> res;
    string charmap[10] = {" ", " ,", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    res.push_back("");
    for (int i = 0; i < digits.size(); i++)
    {
        vector<string> tempres;
        string chars = charmap[digits[i] - '0'];
        for (int c = 0; c < chars.size();c++)
        {
            for (int j = 0; j < res.size();j++)
            {
               tempres.push_back(res[j]+chars[c]);
            }
        }
        res = tempres;
    }
    return res;
} 
int main(int argc, char *argv[])
{
         //created a help command
        if((argc==2)&&strcmp(argv[1],"-h")==0)
        {
            cout<<"possible ways"<<endl;
            return 0;
        }

    else
    {
    string s;
    string *digits=new string();
    cin>>*digits;
     vector<string> res = letterCombinations(*digits);

    for (auto &i : res) 
    {
            for (auto &j : i)
                cout << j;
            cout << ' ';
    }
        cout << endl;
}
}
