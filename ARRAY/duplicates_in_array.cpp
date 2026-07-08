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
    int h[100]={0};
    for(int i=0;i<n;i++)
    {
        h[arr[i]]++;
    }
    for(int i=0;i<100;i++)
    {
        if(h[i]>1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}