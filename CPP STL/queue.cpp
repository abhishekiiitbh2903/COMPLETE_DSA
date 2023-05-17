#include<bits/stdc++.h>
using namespace std ;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.emplace(9);
    cout<<q.front();
    cout<<endl;
    q.pop();
    cout<<q.front();
    cout<<endl;
    cout<<q.empty();
    cout<<endl;
    cout<<q.size();
    cout<<endl;
    queue<int>q1,q2;
    q1.emplace(4);
    q1.emplace(4);
    q1.emplace(4);
    q1.emplace(4);
    
    q2.emplace(41);
    q2.emplace(4);
    q2.emplace(42);
    q2.emplace(4);
    q1.swap(q2);
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;
}