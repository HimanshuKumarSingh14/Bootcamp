#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void create()
{
        struct node*newnode;
    struct node*temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        return;
    }
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=newnode;
    }
}
void remove()
{
    struct node*temp1=head;
    struct node*temp2=head;
    while(temp1!=NULL)
    {
        int sum=0;

        int d=temp1->data;
        while(d>0)
        {
            sum=d%10;
            d=d/10;
        }
        if(sum%2==0)
        {
            
        }

    }
}