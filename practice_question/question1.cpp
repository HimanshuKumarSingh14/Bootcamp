#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int c;
    cin>>c;
    int arr[r][c];
    int msum=-1;
    int mrow=-1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>msum)
        {
            msum=sum;
            mrow=i;
        }
    }
    for(int i=0;i<r;i++)
    {
        if(i==mrow)
        continue;
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} 