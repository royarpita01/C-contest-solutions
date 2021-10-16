#include<bits/stdc++.h>
using namespace std;

void Quicksort(int A[], int p, int r)
{
    int q;
    if(p < r)
    {
        q = partition(A,p,r);
        Quicksort(A,p,q-1);
        Quicksort(A,q+1,r);

    }
}

int partition(int A[], int p, int r)
{
    int x,i,j,temp1,temp2;
    x = A[r];
    i = p-1;
    for(j = p; j<(r-1); j++)
    {
        if(A[j]<=x)
            i=i+1;
        temp1 = A[i];
        A[i] = A[j];
        A[j] = temp1;

        else
        temp2 = A[i+1];
        A[i+1] = A[r];
    }
    return i+1;
}

int main()
{
    int A[50];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>A[i];
    for (int j=0; j<n; j++)
    cout<<A[j]<<" ";
    Quicksort(A,0,n-1);

    return 0;
}
