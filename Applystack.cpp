#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    while(a--){
        string s;
        cin>>s;
        string s1="";
        stack<char>x;
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]>='a'&&s[i]<='z')
                s1+=s[i];
            else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
                x.push(s[i]);
            else if(s[i]=='(')
                        continue;
            else if(s[i]==')')
            {
                s1+=x.top();
                x.pop();
            }
        }
        cout<<s1<<endl;
    }
    return 0;
}
