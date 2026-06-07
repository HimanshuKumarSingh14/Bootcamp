#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number elements\n");
    scanf("%d",&n);
    int arr[n];
    int prefix[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    prefix[0]=0;
    for(int i=0;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i-1];
    }
    int l;
    int r;
    scanf("%d%d",&l,&r);
    int sum=prefix[r]-prefix[l-1];
    printf("%d",sum);

    return 0;
}