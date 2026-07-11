#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int left=0;
    int right=l-1;
    while(right>left)
    {
        swap(s[right],s[left]);
        left++;
        right--;
    }
    cout<<"After reversing the string:"<<s;
    return 0;
}