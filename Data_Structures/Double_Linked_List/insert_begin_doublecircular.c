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
void Insertatbeginning()
{
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value to be inserted: ");
    scanf("%d", &newnode->data);
    if (head == NULL) // If list is empty
    {
        head = tail = temp = newnode;
        head->prev = head;
        head->next = head; // Making it circular
    }
    else // If list is not empty
    {
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = tail;
        tail->next = newnode;
        head = newnode;
    }
}
int main()
{
    int choice;
    do
    {
        printf("1. Insert at beginning\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Insertatbeginning();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid Choice!");
            break;
        }
    } while (choice != 4);
}