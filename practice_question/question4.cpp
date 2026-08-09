#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int minindex=0;
    int mini=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
            minindex=i;
        }

    }
    for(int i=minindex;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}