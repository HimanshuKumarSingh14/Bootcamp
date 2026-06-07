#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void create_node()
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
int occurences(int key)
{
    struct node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(key==temp->data)
        {
            count++;
        }
        temp=temp->next;
    }
    return count;

}
int main()
{
    create_node();
    create_node();
    create_node();
    create_node();
    create_node();
    int key;
    printf("Enter the key you want to search:\n");
    scanf("%d",&key);
    int total=occurences(key);
    printf("total occurences of the key :%d",total);
    return 0;
}