#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string str;
    string clean="";
    getline(cin,str);
    for(char c:str)
    {
        if(isalnum(c))
        {
            clean+=tolower(c);
        }
    }
    int right=clean.size()-1;
    int left=0;
    while(left<right)
    {
        if(clean[left]!=clean[right])
        {
            cout<<"Not Palindrome";
            return 0;
        }
        left++;
        right--;

    }
    cout<<"Palindrome";
    return 0;
}