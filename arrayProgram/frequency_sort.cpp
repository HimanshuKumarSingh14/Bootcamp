#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int>freq;
    for(int i:arr)
    {
        freq[i]++;
    }
    sort(arr.begin(),arr.end(),[&](int a,int b){
        if(freq[a]!=freq[b])
        return freq[a]>freq[b];
        return a<b;
    });
    cout<<"Frequency sorted array:\n";
    for(int num:arr)
    {
        cout<<num<<" ";
    }
    return 0;
}