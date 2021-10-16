#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int c=0;
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]!=str[i+1])
        {
           c++;
        }
        if(c%2==0)
         {
            cout<<"CHAT WITH HER!";
         }
        else
        {
            cout<<"IGNORE HIM!";
        }
    }
    return 0;

}
