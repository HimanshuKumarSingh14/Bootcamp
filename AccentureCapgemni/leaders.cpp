#include<iostream>
#include<vector>
#include<algorithm>
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
    vector<int>v;
    v.push_back(arr[n-1]);
    int min=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=min)
        {
            v.push_back(arr[i]);
            min=arr[i];
        }
    }
    reverse(v.begin(),v.end());
    for(int i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}