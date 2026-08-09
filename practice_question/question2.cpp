#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<arr[n-1]-arr[0];
    return 0;
}