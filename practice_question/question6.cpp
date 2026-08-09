#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l,r;
    cin>>l;
    cin>>r;
    int sum=0;
    for(int i=l;i<=r;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}