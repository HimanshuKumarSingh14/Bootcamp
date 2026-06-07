#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
void create(int n)
{
    int num;
    int s=0;
    struct node*newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<n;i++)
    {
        printf("Enter the data;");
        scanf("%d",&num);
        while(num>0)
        {
            s+=num%10;
            num=num/10;
            
        }
        if(s%2!=0)
        {
            
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    create(n);
}