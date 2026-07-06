#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    queue<int>q;
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);

    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int top=q.front();
        st.push(top);
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n-k;i++)
    {
        q.push(q.front());
        q.pop();

    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}