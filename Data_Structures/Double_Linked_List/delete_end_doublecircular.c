#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head = NULL;
struct Node *tail = NULL;
struct Node *temp = NULL;
struct Node *newnode = NULL;
struct Node *temp1 = NULL;


void deleteatend()
{
    // Case 1: Empty list
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    // Case 2: Only one node
    if (head == tail)
    {
        printf("Deleted: %d\n", head->data);
        free(head);
        head = tail = NULL;
        return;
    }

    // Case 3: More than one node
    struct Node *temp1 = tail;   // temp2 points to node to delete

    printf("Deleted: %d\n", tail->data);

    tail = tail->prev;           // Move tail one step back
    tail->next = head;           // Circular link maintained
    head->prev = tail;           // Head points back to new tail

    free(temp1);                 // Delete old tail
}


void display()
{
    if (head == NULL)
    {
        printf("List is empty!");
    }
    else
    {
        temp = head;
        printf("The elements in the list are: ");
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
    printf("\n");
}
void Insertatend()
{
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value to be inserted: ");
    scanf("%d", &newnode->data);
    if (head == NULL) // If list is empty
    {
        head = tail = temp = newnode;
        newnode->prev = tail;
        newnode->next = head; // Making it circular
    }
    else // If list is not empty
    {
        newnode->prev = tail;
        tail->next = newnode;
        newnode->next = head;
        head->prev = newnode;
        tail = newnode;
    }
}
int main()
{
    int choice;
    do
    {
        printf("1. Insert at end\n");
        printf("2. deleteatend\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Insertatend();
            break;
        case 2:
            deleteatend();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Choice!");
            break;
        }
    } while (choice != 5);
}