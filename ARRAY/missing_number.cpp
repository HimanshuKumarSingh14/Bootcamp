#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int sum=(n*(n+1))/2;
    for(int i=0;i<n-1;i++)
    {
        sum-=arr[i];
    }
    cout<<"Missing element in the array:"<<sum;
    return 0;
}