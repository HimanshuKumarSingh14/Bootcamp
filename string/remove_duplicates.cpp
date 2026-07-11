#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_set<char>st;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(st.find(s[i])==st.end())
        {
            cout<<s[i]<<" ";
            st.insert(s[i]);
        }
    }
    return 0;
}