#include<bits/stdc++.h>
using namespace std ;
int main(){
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.emplace(7);
    st.emplace(8);
     for (auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    st.erase(5); // takes logarithmic time 
    for (auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    st.emplace(5);
    auto it=st.find(4);
    st.erase(it); //takes constant time
     for (auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    auto it1=st.find(2);
    auto it2=st.find(6);
    st.erase(it1,it2);
     for (auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    auto it3 =st.lower_bound(6);
    auto it4 =st.upper_bound(6);
    auto it5 =st.lower_bound(9);
    auto it6 =st.upper_bound(9);
    cout<<*it3<<" "<<*it4<<endl;
    cout<<*it5<<" "<<*it6<<endl;
}