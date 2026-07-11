#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        mp[s[i]]+=1;
    }
    for(auto it:mp)
    {
        cout<<it.first<<"<-"<<it.second<<endl;

    }
    return 0;
}