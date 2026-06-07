#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
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
void create_loop()
{
    struct node*temp=head;
    struct node*temp2=head;
    temp=temp->next;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp;

}
int detect_loop()
{
    struct node*s=head;
    struct node*f=head;
    while(f!=NULL && f->next!=NULL)
    {
        s=s->next;
        f=f->next->next;
        if(s==f)
        {
            return 1;
        }
    }
    return 0;

}
int main()
{
    create();
    create();
    create();
    create();
    create();
    create();
    create_loop();
    int loop=detect_loop();
    if(loop==1)
    {
        printf("Loop exist");
    }
    else{
        printf("No loop exist");
    }
    return 0;
}