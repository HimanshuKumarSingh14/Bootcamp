#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int starti;
    int ansstart;
    int ansend;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long sum=0;
    long long maxi=LONG_MIN;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
        starti=i;
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
            ansstart=starti,ansend=i;
              
        }
        if(sum<0)
        sum=0;

    }
    for(int i=ansstart;i<=ansend;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
