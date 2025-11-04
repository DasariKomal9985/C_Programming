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
void traverse()
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
void insertatbeginning()
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
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
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
void insertatposition()
{
    int pos, i = 1;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    temp = head;
    while(i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    temp->next->prev = newnode;
}
int main()
{
    int choice;
    do
    {
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertatbeginning();
            break;
        case 2:
            insertatend();
            break;
        case 3:
            insertatposition();
            break;
        case 4:
            traverse();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 6);
    return 0;
}