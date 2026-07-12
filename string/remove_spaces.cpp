#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string ns="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            ns+=s[i];
        }
    }
    cout<<ns;
    return 0;

}