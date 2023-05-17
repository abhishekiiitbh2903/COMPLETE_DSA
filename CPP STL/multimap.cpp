#include<bits/stdc++.h>
using namespace std ; 
int main(){
 multimap<int,int>mp;
 multimap<int,pair<int,int>>mp1;
 multimap<pair<int,int>,int>mp2;
 mp.insert(make_pair(1,2));
 mp.insert({21,15});
 mp.insert(make_pair(11,21));
 mp.insert(make_pair(111,22));
 mp.insert(make_pair(1111,23));
 mp.insert(make_pair(11111,24));
 mp.insert(make_pair(12,25));
 mp1.insert({1,{2,3}});
for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
}
for(auto it:mp1){
    cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
}
 multimap<int,int>mp3(mp.begin(),mp.end());
for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
}
mp.erase(mp.begin(),mp.find(1111));
for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
}
mp.erase(1111);
for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
}
cout<<mp3.lower_bound(111)->first<<" "<<mp3.lower_bound(111)->second<<endl;
cout<<mp3.upper_bound(111)->first<<" "<<mp3.upper_bound(111)->second;
}