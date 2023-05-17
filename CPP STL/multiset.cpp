#include<bits/stdc++.h>
using namespace std ;
int main(){
   multiset<int>mp;
   mp.insert(1);
   mp.insert(1);
   mp.insert(2);
   mp.insert(3);
   mp.insert(4);
   mp.insert(5);
   mp.insert(6);
   mp.emplace(7);
   mp.emplace(8);
   mp.emplace(9);
     for (auto it:mp){
        cout<<it<<" ";
    }
    cout<<endl;
   mp.erase(5); // takes logarithmic time 
    for (auto it:mp){
        cout<<it<<" ";
    }
    cout<<endl;
   mp.emplace(5);
    auto it=mp.find(4);
   mp.erase(it); //takes constant time
     for (auto it:mp){
        cout<<it<<" ";
    }
    cout<<endl;
    auto it2=mp.find(6);
    auto it1=mp.find(2);
   mp.erase(it1,it2);
     for (auto it:mp){
        cout<<it<<" ";
    }
    cout<<endl;
    auto it3 =mp.lower_bound(6);
    auto it4 =mp.upper_bound(6);
    auto it5 =mp.lower_bound(9);
    auto it6 =mp.upper_bound(9);
    cout<<*it3<<" "<<*it4<<endl;
    cout<<*it5<<" "<<*it6<<endl;
}