#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void Recursive_Insertion_Sort(vector<int>& v , int start , int size){
    if(start>=size) return;
    while(start>0 && (v[start-1]>v[start])){
    //  swap(v[start-1],v[start]); 
     int temp= v[start-1];
     v[start-1]=v[start];
     v[start]=temp;
     start--;
    }
    Recursive_Insertion_Sort(v,start+1,size);
    
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
   Recursive_Insertion_Sort(v,0,n);
    for(auto &it:v) cout<<it<<" ";
    cout<<endl;
}
return 0;
}