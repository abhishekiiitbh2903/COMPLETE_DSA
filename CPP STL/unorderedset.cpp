#include<bits/stdc++.h>
using namespace std ;
int main(){
    unordered_set<int>ut;
   ut.insert(1);
   ut.insert(2);
   ut.insert(3);
   ut.insert(4);
   ut.insert(5);
   ut.insert(6);
   ut.emplace(7);
   ut.emplace(8);
   ut.emplace(9);
     for (auto it:ut){
        cout<<it<<" ";
    }
    cout<<endl;
   ut.erase(5); // takes logarithmic time 
    for (auto it:ut){
        cout<<it<<" ";
    }
    cout<<endl;
   ut.emplace(5);
    auto it=ut.find(4);
   ut.erase(it); //takes constant time
     for (auto it:ut){
        cout<<it<<" ";
    }
    cout<<endl;
    auto it2=ut.find(6);
    auto it1=ut.find(2);
   ut.erase(it1,it2);
     for (auto it:ut){
        cout<<it<<" ";
    }
    cout<<endl;
}