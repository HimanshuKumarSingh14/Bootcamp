#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    stack<int>temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);

    }
    while(!st.empty())
    {
        int x=st.top();
        st.pop();
        while(!temp.empty() && temp.top()>x)
        {
            st.push(temp.top());
            temp.pop();
        }
        temp.push(x);
    }
    while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    return 0;
}