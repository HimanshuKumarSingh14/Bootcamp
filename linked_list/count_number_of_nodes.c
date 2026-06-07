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
int countNode()
{
    struct node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    create();
    create();
    create();
    create();
    create();
    create();
   int totalNodes= countNode();
   printf("Total node in the list is: %d",totalNodes);
    return 0;
}