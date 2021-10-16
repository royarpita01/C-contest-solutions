#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int main()
{
    int n,k,p=0,A[MAX],cnt=0;
    cin>>n;
    cin>>k;

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<n; i++)
    {
        if(5-A[i]>=k)
        {
            cnt++;
            cout<<5-A[i]<<" ";
        }

    }

    cnt=p%3;
    cout<<cnt<<endl;

    return 0;

}
