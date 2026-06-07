#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of candidates:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number of votes :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int h[50]={0};
    for(int i=0;i<n;i++)
    {
        h[arr[i]]++;
    }
    int t=n/4;
    int i;
    for(i=0;i<50;i++)
    {
        if(h[i]>t)
        {
            printf("%d",i);
            break;
        }
    }
    if(i==50)
    {
        printf("No element appear more than 1/4 times");
    }
    return 0;
}