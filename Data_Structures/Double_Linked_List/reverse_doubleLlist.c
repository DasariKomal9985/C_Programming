#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL, *temp = NULL, *temp1 = NULL, *tail = NULL ,*newnode = NULL , *currentnode = NULL, *nextnode = NULL;
void ReverseDoubleLinkedList()
{
    if(head == NULL)
    {
        printf("List is empty, cannot reverse\n");
        return;
    }       
    currentnode = head;
    while(currentnode != NULL)
    {
        nextnode = currentnode->next;
        currentnode->next = currentnode->prev;
        currentnode->prev = nextnode;
        currentnode = nextnode;
    }
    currentnode = head;
    head = tail;
    tail = currentnode;
}
void insert()
{
    newnode = (struct Node *)malloc(sizeof(struct Node));
    if (newnode == NULL)
    {
        printf("Memory not allocated!\n");
        return;
    }

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

void traverse()
{
    temp1 = head;
    while (temp1 != NULL)
    {
        printf("%d\t", temp1->data);
        temp1 = temp1->next;
    }
    printf("\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n1.Insert\n2.traverse\n3.ReverseDoubleLinkedList\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            traverse();
            break;
        case 3:
            ReverseDoubleLinkedList();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid Choice!");
            break;
        }
    } while (choice != 5);
}