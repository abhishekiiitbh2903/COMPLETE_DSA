#include<bits/stdc++.h>
using namespace std ;
int main(){
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(6);
    pq.push(7);
    pq.push(8);
    pq.emplace(9);
    cout<<pq.top();
    cout<<endl;
    pq.pop();
    cout<<pq.top();
    cout<<endl;
    cout<<pq.empty();
    cout<<endl;
    cout<<pq.size();
    cout<<endl;
    priority_queue<int>pq1,pq2;
    pq1.emplace(4);
    pq1.emplace(4);
    pq1.emplace(4);
    pq1.emplace(4);
    
    pq2.emplace(41);
    pq2.emplace(4);
    pq2.emplace(42);
    pq2.emplace(4);
    pq1.swap(pq2);
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    cout<<endl;

    priority_queue<int,vector<int>,greater<int>>pq4;
    pq4.push(1);
    pq4.push(2);
    pq4.push(3);
    pq4.push(4);
    pq4.push(5);
    pq4.push(6);
    pq4.push(7);
    pq4.push(8);
    pq4.emplace(9);
    cout<<pq4.top();
    cout<<endl;
    pq4.pop();
    cout<<pq4.top();
    cout<<endl;
    cout<<pq4.empty();
    cout<<endl;
    cout<<pq4.size();
    cout<<endl;
    priority_queue<int,vector<int>,greater<int>>pq5,pq6;
    pq5.emplace(4);
    pq5.emplace(4);
    pq5.emplace(4);
    pq5.emplace(4);
    
    pq6.emplace(41);
    pq6.emplace(4);
    pq6.emplace(42);
    pq6.emplace(4);
    pq5.swap(pq6);
    while(!pq5.empty()){
        cout<<pq5.top()<<" ";
        pq5.pop();
    }
    cout<<endl;
    while(!pq6.empty()){
        cout<<pq6.top()<<" ";
        pq6.pop();
    }
    cout<<endl;
}