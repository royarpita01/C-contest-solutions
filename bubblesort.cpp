#include<bits/stdc++.h>
using namespace std;

int bubble_sort(int A[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=n-1; j>=i+1; j--)
        {
            if (A[j] < A[j-1])
            {
                swap(A[j].A[j-1])
            }
        }
    }
}

int main()
{
    int n;
    int A[100];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    bubble_sort(A,n);
    for(int i=0; i<n; i++)
    {
        cout<<"A[i]"<<"i==n-1"<<" ";

    }
    return 0;
}
