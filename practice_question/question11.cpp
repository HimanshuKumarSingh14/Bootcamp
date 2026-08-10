#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements";
        int num;
        cin>>num;
        q.push(num);
    }
    int k;
    cout<<"Enter the psition where to reverse:";
    cin>>k;
    stack<int>st;
    for(int i=0;i<k;i++)
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    int l=q.size();
    for(int i=0;i<l-k;i++)
    {
        q.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }

    return 0;
}