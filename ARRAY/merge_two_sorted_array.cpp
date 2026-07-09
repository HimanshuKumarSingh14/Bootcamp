#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int left=0;
    int right=n1-1;
    while(left<n2 && right>=0)
    {
        if(arr2[left]<arr1[right])
        {
            swap(arr2[left],arr1[right]);
            left++;
            right--;
        }
        else{
            break;
        }
    }
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}