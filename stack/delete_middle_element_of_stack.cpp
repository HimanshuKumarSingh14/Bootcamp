#include<iostream>
#include<stack>
using namespace std;
void deleteMiddle(stack<int>&st,int curr,int mid)
{
    if(st.empty())
    return;
    int top=st.top();
    st.pop();
    if(curr==mid)
    return;
    deleteMiddle(st,curr+1,mid);
    st.push(top);
}
int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int n=st.size();
    int mid=n/2; //0 based indexing
    deleteMiddle(st,0,mid);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}