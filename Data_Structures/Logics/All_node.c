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
        head=newnode;
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
void insert_head()
{
    int b;
    printf("enter number:\n");
    scanf("%d",&b);
    newnode=(struct room*)malloc(sizeof(struct room));
    newnode->id=b;
    newnode->next=NULL;
    if(head==NULL)
    {
       head=newnode;
    }
    else
    {
        newnode->next=head;
    }
    head=newnode;
}
void insert_position_atnode()
{
    struct room *temp2=head;
    int c,i,position;
    printf("enter number:\n");
    scanf("%d",&c);
    printf("enter which position:\n");
    scanf("%d",&position);
    newnode=(struct room*)malloc(sizeof(struct room));
    newnode->id=c;
    newnode->next=NULL;
    for (int i = 0; temp2 != NULL && i < position - 1-i; i++) {
        temp2 = temp2->next;
    }
    newnode->next = temp2->next;
    temp2->next = newnode;
    
}
void insert_position_afternode()
{
    struct room *temp3=head;
    int c,i,position;
    printf("enter number:\n");
    scanf("%d",&c);
    printf("enter which position:\n");
    scanf("%d",&position);
    newnode=(struct room*)malloc(sizeof(struct room));
    newnode->id=c;
    newnode->next=NULL;
    for (int i = 0; temp3 != NULL && i < position ; i++) {
        temp3 = temp3->next;
    }
    newnode->next = temp3->next;
    temp3->next = newnode;
    
}
void insert_position_beforenode()
{
    struct room *temp4=head;
    int c,i,position;
    printf("enter number:\n");
    scanf("%d",&c);
    printf("enter which position:\n");
    scanf("%d",&position);
    newnode=(struct room*)malloc(sizeof(struct room));
    newnode->id=c;
    newnode->next=NULL;
    for (int i = 0; temp4 != NULL && i < position-2 ; i++) {
        temp4 = temp4->next;
    }
    newnode->next = temp4->next;
    temp4->next = newnode;
    
}
void delete_headnode()
{
    struct room *temp5=head;
    if(head==NULL)
    {
        printf("head is already empty:\n");
    }
    else
    {
        temp5=head;
        head=head->next;
        free(temp5);
    }
}
void delete_endnode()
{
    
    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        return;
    }
    struct room *temp6=head;
    while(temp6->next->next!=NULL)
    {
        temp6=temp6->next;
    }
    free(temp6->next);
    temp6->next=NULL;
}
void delete_atposition()
{
    struct room *temp7=head;
    struct room *next1=NULL;
    int e,i,position2;
    printf("enter which position:\n");
    scanf("%d",&position2);
    for (int i = 0; temp7 != NULL && i < position2 - 1; i++) {
        temp7 = temp7->next;
    }
    next1=temp7->next->next;
    free(temp7->next);
    temp7->next=next1;
}
void delete_afterposition()
{
    struct room *temp8=head;
    struct room *next2=NULL;
    int position3;
    printf("enter which position:\n");
    scanf("%d",&position3);
    for (int i = 0; temp8 != NULL && i < position3 ; i++) {
        temp8 = temp8->next;
    }
    next2=temp8->next;
    temp8->next=temp8->next->next;
    free(next2);
    
}
void delete_beforeposition()
{
    struct room *temp9=head;
    struct room *next3=NULL;
    int position4;
    printf("enter which position:\n");
    scanf("%d",&position4);
    if (head == NULL || position4 <= 1) {
        printf("No node exists before the given position.\n");
        return;
    }
    for (int i = 0; temp9 != NULL && i < position4-2 ; i++) {
        temp9 = temp9->next;
    }
    if (temp9 == NULL || temp9->next == NULL || temp9->next->next == NULL) {
        printf("Position is greater than the length of the list.\n");
        return;
    }
    next3=temp9->next;
    temp9->next=temp9->next->next;
    free(next3);
    
}
int main()
{
    int d;
    char ch;
    do{
        printf("1.)insert\n2.)traverse\n3.)insert_head\n4.)insert_position_atnode\n5.)insert_position_afternode\n6.)insert_position_beforenode\n");
        printf("7.)delete_head\n8.)delete_endnode\n9.)delete_atposition\n");
        printf("10.)delete_afterposition\n11.)delete_beforeposition\n");
        scanf("%d",&d);
        switch(d)
        {
            case 1:        insert();break;
            case 2:        traverse();break;
            case 3:        insert_head();break;
            case 4:        insert_position_atnode();break;
            case 5:        insert_position_afternode();break;
            case 6:        insert_position_beforenode();break;
            case 7:        delete_headnode();break;
            case 8:        delete_endnode();break;
            case 9:        delete_atposition();break;
            case 10:       delete_afterposition();break;
            case 11:       delete_beforeposition();break;
        }
        printf("do you want to continue:\n");
        scanf(" %c",&ch);
    }while(ch!='n');
}




//oufvidfvhcuvhdkj