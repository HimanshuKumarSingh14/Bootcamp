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
struct node*middle_node()
{
    struct node*s=head;
    struct node*f=head;
    while(f!=NULL && f->next!=NULL)
    {
        s=s->next;
        f=f->next->next;
    }
    return s;
}
int main()
{
    create();
    create();
    create();
    create();
    create();
    create();
    struct node*temp=middle_node();
    printf("Middle node data : %d",temp->data);
    return 0;
}