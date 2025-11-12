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
int getlength()
{
	int count=0;
	temp=head;
	do
	{
		count++;
		temp=temp->next;
	}while(temp!=head);
	return count;
}
void insertatposition()
{
    int pos, i = 1 ,length;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the position to insert the new node: ");
    scanf("%d", &pos);
    printf("Enter the value to be inserted: ");
    scanf("%d", &newnode->data);
    length=getlength();
    if(pos<1 || pos>length)
    {
    	printf("Invalid position!\n");
    	return;
	}
    if (head == NULL) // If list is empty
    {
        head = tail = temp = newnode;
        newnode->prev = tail;
        newnode->next = head; // Making it circular
    }
    else // If list is not empty
    {
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
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
        printf("2. Insert at position\n");
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
            insertatposition();
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