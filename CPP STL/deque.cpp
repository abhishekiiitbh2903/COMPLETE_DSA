#include<bits/stdc++.h>
using namespace std ;
int main(){
    deque<int>dq;
    dq.emplace_back(2);
    dq.push_back(4);
    dq.emplace_front(5);
    dq.push_front(1);
    dq.push_front(10);
    dq.push_back(5);
    dq.push_front(12);
    dq.pop_front();
    dq.pop_back();
    for(auto it:dq){
      cout<<it<<" ";
    }
    cout<<endl;
    deque<int>::iterator it1,it2,it3,it4,it5;
    it1=dq.begin();
    it2=dq.begin();
    advance(it2,2); // increases iterator it2 by 2 unit
    dq.erase(it1,it2);
    // it deletes from index 0 to 1 ...
     for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    it3=dq.begin();
    dq.erase(it3);
    for(auto it:dq){
     cout<<it<<" ";
    }
    cout<<endl;
    it4=dq.begin();
    dq.insert(it4,200);
     for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    it5=dq.begin();
    dq.insert(it5,2,10);
     for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    deque<int>copy(2,100);
    dq.insert(dq.begin(),copy.begin(),copy.end());
     for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<dq.size();
    cout<<endl;
    dq.pop_back();
     for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<dq.size();
    cout<<endl;
    dq.swap(copy);
     for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
     for(auto it:copy){
        cout<<it<<" ";
    }
    cout<<endl;
    copy.swap(dq);
     for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
     for(auto it:copy){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<dq.empty();
    cout<<endl;
    dq.clear();
    cout<<dq.empty();
    cout<<endl;
}