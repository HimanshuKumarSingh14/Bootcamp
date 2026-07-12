#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    unordered_map<char,int>mp;
    for(int i=0;i<l;i++)
    {
        mp[s[i]]++;
    }
    for(int i=0;i<l;i++)
    {
        if(mp[s[i]]==1)
        {
            cout<<s[i];
            break;
        }
    }
    return 0;
}