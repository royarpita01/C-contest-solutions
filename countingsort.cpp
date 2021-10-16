#include<bits/stdc++.h>
using namespace std;

int k=0;

void counting_sort(int A[],int B[], int n)
{
    int C[30];

    for(int i=0; i<k+1; i++)
    {
        C[i] = 0;
    }
    for(int j=1; j<=n; j++)
    {
        C[A[j]]++;
    }
    for(int i=1; i<=k; i++)
    {
        C[i]=C[i]+C[i-1];
    }
    for(int j=n; j>0; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]]=C[A[j]]-1;
    }

}

int main()
{
    int n;
    int A[30];
    int B[30];

    cout<<"Enter the length of the array: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
        if(A[i]>k)
        {
            k=A[i];
        }
        cout<<endl;
        counting_sort(A,B,n);
        for(i=1; i<=n; i++)
        {
            cout<<B[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}
