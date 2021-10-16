#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int main()
{
    int A[MAX];
    int length;

    cout<<"Enter the length of array:\n";
    cin>>length;
    cout<<"Enter the elements:\n";
    for(int i=0; i<length;i++)
    {
        cin>>A[i];
    }

    for (int i=1; i<length; i++)
    {
        int key = A[i];
        int j = i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
        for(int i=0; i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    }
    cout<<"Sorted list:\n";
    for(int i=0; i<length;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}


