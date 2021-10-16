#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int main()
{
    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    char s;
    char str[MAX];
    for(int i=0; i<t; i++)
    {
    cout<<"Enter the string: ";
    gets(str);

    s = str[0];
    int count = 1;
    for(int i=1; str[i]!='\0'; i++)
    {
        if(str[i]==s)
            count++;
        else
        {
            cout<<s<<count;
            s=str[i];
            count=1;
        }
    }
    }

     cout<<s<<count;

 return 0;
}
