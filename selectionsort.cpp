#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,mini,temp;
    int A[50];

    cout<<"Enter the length of the array:\n";
    cin>>n;

    cout<<"Enter array elements:\n";
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(i=0; i<(n-1); i++)
    {
        mini = i;

        for(j = i; j<(n-1); j++)
        {
            if(A[i] < A[mini])
            {
                mini = j;
            }
        }
        temp = A[i];
        A[i] = A[mini];
        A[mini] = temp;
     }
        if(i!=mini)
        {
            mini++;
        }

    cout<<"Sorted array: ";
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}

