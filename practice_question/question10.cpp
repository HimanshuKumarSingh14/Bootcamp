#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str;
    cin>>str;
    stack<char>st;
    for(char c:str)
    {
        st.push(c);
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }

    return 0;
}