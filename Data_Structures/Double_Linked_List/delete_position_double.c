#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL, *temp = NULL, *temp1 = NULL, *temp2 = NULL, *tail = NULL;
void deleteatposition()
{
    int position, i = 1;
    printf("Enter the position to delete: ");
    scanf("%d", &position);
    if (head == NULL)
    {
        printf("List is empty, nothing to delete!\n");
        return;
    }
    temp1 = head;
    while(i<position)
    {
        temp1 = temp1->next;
        i++;
    }
    temp1->prev->next = temp1->next;
    temp1->next->prev = temp1->prev;
    free(temp1);
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
        printf("\n1.Insert\n2.traverse\n3.deleteatposition\n4.Exit");
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
            deleteatposition();
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