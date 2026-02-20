#include <stdio.h>
#include <stdlib.h>

// Node structure for singly linked list
struct Node
{
    int data;
    struct Node *next;
};

// Global pointers for List1
struct Node *head1 = NULL, *temp1 = NULL, *newNode1 = NULL;

// Global pointers for List2
struct Node *head2 = NULL, *temp2 = NULL, *newNode2 = NULL;

// Global pointers for Sum List
struct Node *sumHead = NULL, *sumTail = NULL, *newSumNode = NULL;

// Function to create a new node
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory not allocated\n");
        return NULL;
    }

    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at end for List1
void insertAtEndList1()
{
    int value;
    printf("Enter value for List1: ");
    scanf("%d", &value);

    newNode1 = createNode(value);

    if (newNode1 == NULL)
        return;

    if (head1 == NULL)
    {
        head1 = newNode1;
    }
    else
    {
        temp1 = head1;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = newNode1;
    }
}

// Insert at end for List2
void insertAtEndList2()
{
    int value;
    printf("Enter value for List2: ");
    scanf("%d", &value);

    newNode2 = createNode(value);

    if (newNode2 == NULL)
        return;

    if (head2 == NULL)
    {
        head2 = newNode2;
    }
    else
    {
        temp2 = head2;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = newNode2;
    }
}

// Traverse any list
void traverse(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    printf("Elements: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Sum of two linked lists (same length)
void sumTwoLists()
{
    if (head1 == NULL || head2 == NULL)
    {
        printf("Both lists must have elements to perform sum!\n");
        return;
    }

    // Clear old sum list (if already exists)
    sumHead = NULL;
    sumTail = NULL;

    temp1 = head1;
    temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        int sum = temp1->data + temp2->data;

        newSumNode = createNode(sum);

        if (sumHead == NULL)
        {
            sumHead = newSumNode;
            sumTail = newSumNode;
        }
        else
        {
            sumTail->next = newSumNode;
            sumTail = newSumNode;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    printf("Sum list created successfully!\n");
}

// Main function with menu
int main()
{
    int choice;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Insert into List1 (at end)\n");
        printf("2. Insert into List2 (at end)\n");
        printf("3. Traverse List1\n");
        printf("4. Traverse List2\n");
        printf("5. Sum List1 and List2\n");
        printf("6. Traverse Sum List\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertAtEndList1();
            break;

        case 2:
            insertAtEndList2();
            break;

        case 3:
            printf("List1:\n");
            traverse(head1);
            break;

        case 4:
            printf("List2:\n");
            traverse(head2);
            break;

        case 5:
            sumTwoLists();
            break;

        case 6:
            printf("Sum List:\n");
            traverse(sumHead);
            break;

        case 7:
            exit(0);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }

    } while (choice != 7);

    return 0;
}
