#include<bits/stdc++.h>
using namespace std ;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.emplace(9);
    cout<<st.top();
    cout<<endl;
    st.pop();
    cout<<st.top();
    cout<<endl;
    cout<<st.empty();
    cout<<endl;
    cout<<st.size();
    cout<<endl;
    stack<int>st1,st2;
    st1.emplace(4);
    st1.emplace(4);
    st1.emplace(4);
    st1.emplace(4);
    
    st2.emplace(41);
    st2.emplace(4);
    st2.emplace(42);
    st2.emplace(4);
    st1.swap(st2);
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<endl;
}