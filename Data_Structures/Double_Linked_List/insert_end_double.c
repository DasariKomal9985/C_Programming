#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL;
struct Node *tail = NULL;
struct Node *temp = NULL;
struct Node *temp1 = NULL;
struct Node *newnode = NULL;
void Traverse()
{
    temp = head;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("The elements in the list are:\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void insertatend()
{
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
int main()
{
    int choice;
    do
    {
        printf("1. Insert at end \n");
        printf("2. Traverse\n");
        printf("3. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertatend();
            break;
        case 2:
            Traverse();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 4);
    return 0;
}
