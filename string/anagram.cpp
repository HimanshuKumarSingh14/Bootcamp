#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(s1.length()!=s2.length())
    {
        cout<<"Not anagram";
        return 0;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        cout<<"Anagram";
    }
    else{
        cout<<"Not Anagram";
    }
    return 0;
}