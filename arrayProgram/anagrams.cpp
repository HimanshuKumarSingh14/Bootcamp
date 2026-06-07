#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1;
    string s2;
    cout<<"Enter the strings"<<endl;
    getline(cin,s1);
    getline(cin,s2);
    if(s1.size()!=s2.size())
    {
        cout<<"Not anagram"<<endl;
        return 0;
    }

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"Two string are anagram"<<endl;
        }
        else{
            cout<<"Not anagram"<<endl;
        }
return 0;
    
}