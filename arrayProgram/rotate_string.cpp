#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int j=s.size();
    int n;
    cin>>n;
    char ch;
    cin>>ch;
    n=n%j;
    int l=s.size();
    if(ch =='l' || ch=='L'){
    reverse(s.begin(),s.begin()+n);
    reverse(s.begin()+n,s.end());
    reverse(s.begin(),s.end());
    }
    else{
        reverse(s.begin()+l-n,s.end());
        reverse(s.begin(),s.begin()+l-n);
        reverse(s.begin(),s.end());
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=tolower(s[i]);
        }
        else{
        s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}