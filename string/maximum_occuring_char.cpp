#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int freq[256]={0};
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]]++;
    }
    int maxCount=0;
    char c;
    for(int i=0;i<256;i++)
    {
        if(maxCount<freq[i])
        {
            maxCount=freq[i];
            c=i;
        }

    }
    cout<<c<<" "<<maxCount;
    return 0;
}
