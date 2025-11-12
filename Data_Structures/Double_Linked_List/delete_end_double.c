#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL, *temp = NULL, *temp1 = NULL, *temp2 = NULL, *tail = NULL;
void deleteatending()
{
    if (tail == NULL)
    {
        printf("List is empty, nothing to delete!\n");
        return;
    }

    if (head == tail)
    {
        printf("Deleted: %d\n", tail->data);
        free(tail);
        head = tail = NULL;
        return;
    }

    temp2 = tail;
    printf("Deleted: %d\n", tail->data);
    tail = tail->prev;
    tail->next = NULL;
    free(temp2);
}

void insert()
{
    struct Node *newnode = malloc(sizeof(struct Node));
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
        printf("\n1.Insert\n2.traverse\n3.deleteatending\n4.Exit");
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
            deleteatending();
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