#include<bits/stdc++.h>

using namespace std;

int a[1000001]={0};

int main()
{
    int i,j,n;

    cin>>j;

    for(i=0; i<j; i++)
    {
        cin>>n;
        a[n]++;

    }

    for(i=0;i<1000001;i++)
    {
        while(a[i]>0){
            cout<<i<<" ";
            a[i]--;
        }
    }
    return 0;

}
