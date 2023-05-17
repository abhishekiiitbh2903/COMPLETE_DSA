#include<bits/stdc++.h>
using namespace std ;
int main(){
    list<int>ls;
    ls.emplace_back(2);
    ls.push_back(4);
    ls.emplace_front(5);
    ls.push_front(1);
    ls.push_front(10);
    ls.push_front(12);
    for(auto it:ls){
      cout<<it<<" ";
    }
    cout<<endl;
    // in list push_front is cheaper as far as time complexity is being concerned than push_front of lsector 
    cout<<ls.back()<<endl;
    list<int>::iterator it1,it2,it3,it4,it5;
    it1=ls.begin();
    it2=ls.begin();
    advance(it2,2); // increases iterator it2 by 2 unit
    ls.erase(it1,it2);
    // it deletes from index 0 to 1 ...
     for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    it3=ls.begin();
    ls.erase(it3);
    for(auto it:ls){
     cout<<it<<" ";
    }
    cout<<endl;
    it4=ls.begin();
    ls.insert(it4,200);
     for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    it5=ls.begin();
    ls.insert(it5,2,10);
     for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    list<int>copy(2,100);
    ls.insert(ls.begin(),copy.begin(),copy.end());
     for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ls.size();
    cout<<endl;
    ls.pop_back();
     for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ls.size();
    cout<<endl;
    ls.swap(copy);
     for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
     for(auto it:copy){
        cout<<it<<" ";
    }
    cout<<endl;
    copy.swap(ls);
     for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
     for(auto it:copy){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ls.empty();
    cout<<endl;
    ls.clear();
    cout<<ls.empty();
    cout<<endl;
}