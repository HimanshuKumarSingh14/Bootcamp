#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void create()
{
    struct node*temp=head;
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void singlyDoubly()
{
    struct node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
}
int main()
{
    create();
    create();
    create();
    create();
    create();
    singlyDoubly();
    return 0;
}