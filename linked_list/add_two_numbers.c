#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*h1=NULL,*h2=NULL;
void create_node(struct node **head)
{
    struct node*temp;
    struct node*temp1=*head;
    temp=(struct node*)malloc (sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(*head==NULL)
    {
        *head=temp;
    }
    else{
        temp1=*head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;


    }

}
struct node * add(struct node*head1,struct node*head2)
{
    struct node*t1=head1;
    struct node*t2=head2;
    struct node*dummyNode=(struct node*)malloc(sizeof(struct node));
    dummyNode->next=NULL;
    struct node*curr=dummyNode;
    int carry=0;
    while(t1!=NULL ||t2!=NULL)
    {
        int sum=carry;
        if(t1!=NULL)
        {
            sum=sum+t1->data;
            t1=t1->next;
        }
        if(t2!=NULL)
        {
            sum=sum+t2->data;
            t2=t2->next;
        }
        struct node *newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=(sum%10);
        newNode->next=NULL;
        carry=sum/10;
        curr->next=newNode;
        curr=curr->next;
        
    }
    if(carry)
    {
        struct node*newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=carry;
        newNode->next=NULL;
        curr->next=newNode;
    }
    return dummyNode->next;
}

void display_sum(struct node* newHead)
{
    struct node*temp=newHead;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
int main()
{
    create_node(&h1);
    create_node(&h1);
    create_node(&h2);
    create_node(&h2);
    create_node(&h2);
    create_node(&h2);
    struct node*newHead=add(h1,h2);
    display_sum(newHead);
    return 0;
}