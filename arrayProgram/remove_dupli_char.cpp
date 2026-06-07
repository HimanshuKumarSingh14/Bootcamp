#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    string ch;
    cout<<"Enter the string:\n";
    cin>>ch;
    set<char>st;
    for(int i=0;i<ch.size();i++)
    {
        st.insert(ch[i]);

    }
    string result="";
    for(auto it=st.begin();it!=st.end();it++)
    {
        result+=*it;

    }
    cout<<result;
    return 0;
}