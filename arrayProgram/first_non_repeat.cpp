#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    getline(cin,s);
    int h[256]={0};
    for(int i=0;i<s.size();i++)
    {
        h[s[i]]++;
    }
    int i;
    for(i=0;i<s.size();i++)
    {
        if(h[s[i]]==1)
        {
            cout<<s[i];
            return 0;
        }
    }
    if(i==s.size())
    {
        cout<<-1;
    }
    return 0;
}