#include<stdio.h>
#include<stdlib.h>
struct room{
    int id;
    struct room *next;
};
struct room *head=NULL,*newnode=NULL,*temp=NULL;
void insert()
{
    int a;
    printf("enter number:\n");
    scanf("%d",&a);
    newnode=(struct room*)malloc(sizeof(struct room));
    newnode->id=a;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
    }
    temp=newnode;
}
void traverse()
{
    struct room *temp1=head;
    while(temp1!=NULL)
    {
        printf("%d\t",temp1->id);
        temp1=temp1->next;
    }
    printf("\n");
}
int main()
{
    int choice;
    while(1)
    {
        printf("1.insert\n2.traverse\n"
               "3.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                traverse();
                break;
            case 3:
                exit(0);
            default:
                printf("invalid choice:\n");
        }
    }
    return 0;
}