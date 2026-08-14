#include<iostream>
#include<stack>
using namespace std;
void deleteMiddle(stack<int>&st,int n,int current=0)
{
    if(current==n/2)
    {
        st.pop();
        return;
    }
    int x=st.top();
    st.pop();
    deleteMiddle(st,n,current+1);
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int n=st.size();
    deleteMiddle(st,n);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}