#include<bits/stdc++.h>
using namespace std;

char TREE[10];
int total_node = 10;


int rootnode(char key)
{
if(TREE[0]!='\0')
    cout<<"Tree already had root";
    else
        TREE[0]=key;
    return 0;
}

int traversetree()
{
    cout<<"\n";
    for(int i=0; i<10; i++)
    {
        if(TREE[i]!='\0')
            cout<<TREE[i];
        else
            cout<<"-";
    }
}


//char TREE[] = {'\0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', '\0', '\0', 'J', '\0', 'K', 'L'};

int right_child(char key, int index)
{
    if(TREE[index]!='\0' && ((2*index)+1)<=total_node)
        return (2*index)+1;
    return -1;
}

int left_child(char key, int index)
{
  if(TREE[index]!='\0' && (2*index)<=total_node)
        return (2*index);
    return -1;
}

void preorder(char key, int index)
{
    if(index>0 && TREE[index]!='\0')
    {
        cout<<TREE[index];
        preorder(left_child(index));
        preorder(right_child(index));

    }
}

void inorder(char key, int index)
{
    if(index>0 && TREE[index]!='\0')
    {
        inorder(left_child(index));
        cout<<TREE[index];
        inorder(right_child(index));

    }
}

void postorder(char key, int index)
{
    if(index>0 && TREE[index]!='\0')
    {
        postorder(left_child(index));
        postorder(right_child(index));
        cout<<TREE[index];
    }
}

int main()
{
    rootnode('A');
    right_child('C', 2);
    left_child('D', 0);
    right_child('E', 1);
    left_child('F', 2);
    traversetree();

    cout<<"Preorder:\n";
    preorder (1);
    cout<<"\nInorder:\n";
    inorder (1);
    cout<<"\nPostorder:\n";
    postorder (1);

    return 0;

}
