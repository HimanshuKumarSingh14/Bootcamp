#include<iostream>
#include<algorithm>
#include<vector>
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
    int max_right=arr[n-1];
    vector<int>ans;
    ans.push_back(max_right);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=max_right)
        {
            ans.push_back(arr[i]);
            max_right=arr[i];
        }
    }
    reverse(ans.begin(),ans.end());
    for(int x:ans)
    {
        cout<<x<<" ";
    }

    return 0;
}