#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;
void create_Node(int n)
{
    struct node*newNode;
    newNode=malloc(sizeof(struct node));
    for(int i=0;i<n;i++)
    {
        
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    create_Node(n);
    return 0;
}