#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)= new_node;
}

void deleteNode(struct Node **head_ref, int position)
{

   if (*head_ref == NULL)
      return;

   struct Node* temp = *head_ref;

    if (position == 0)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;

    if (temp == NULL || temp->next == NULL)
         return;

    struct Node *next = temp->next->next;

    free(temp->next);

    temp->next = next;
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        cout<<node->data;
        node = node->next;
    }
}


int main()
{

    struct Node* head = NULL;

    push(&head, 9);
    push(&head, 15);
    push(&head, 4);
    push(&head, 7);
    push(&head, 19);
    push(&head, 2);
    push(&head, 6);
    push(&head, 20);

    puts("The original list is: ");
    printList(head);
    deleteNode(&head, 3);
    puts("\nLinked List after Deletion at position 3: ");
    printList(head);
    return 0;
}
