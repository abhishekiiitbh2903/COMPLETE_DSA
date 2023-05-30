// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// sort(begin(v),end(v));
// for(auto &it:v) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

/// Above discussed is bruteforce wherein we are sorting that usually takes nlogn time complexity 
// Space complexity in case of merge sort being o(n) i.e of being auxillary array or may be in quick sort we won't be requiring any extra space 

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// int cnt_0=0,cnt_1=0,cnt_2=0;
// for(auto &it:v){
//     if(it==0) cnt_0++;
//     else if(it==1) cnt_1++;
//     else cnt_2++;
// }
// for(int i=0;i<cnt_0;i++){
//     v[i]=0;
// }
// for(int i=cnt_0;i<cnt_0+cnt_1;i++){
//     v[i]=1;
// }
// for(int i=cnt_0+cnt_1;i<n;i++){
//     v[i]=2;
// }
// for(auto &it:v) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

// tc =o(n) for storing count of each element and o(n) for replacing values 
// sc = o(1);

// Optimised Solution
//======> DUTCH NATIONAL FLAG ALGORITHM <=======
// INTUITION: ARRAY INDEX RANGES FROM  0 TO N-1
// WE WILL BE HAVING THREE POINTERS LOW MID AND HIGH
// TARGET : O- LOW-1 // ALL ZEROES
// TARGET : LOW- MID-1 // ALL ONES
// TARGET: MID-HIGH// UNSORTED 
// TARGET :HIGH+1- N-1 // ALL TWOS
// INITIALLY MID AND LOW WILL POINT TO 0 AND HIGH POINT TO N-1
// DECISION MAKING : 
// V[MID]==0 THEN SWAP(V[LOW],V[MID]) LOW++, MID++;
// V[MID]==1  MID++;
// V[MID]==2 SWAP(V[MID],V[HIGH]) HIGH--;

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
int low=0,mid=0,high=n-1;
while(mid<=high){
if(v[mid]==0){
    swap(v[low],v[mid]);
    low++;
    mid++;
}
else if(v[mid]==1) mid++;
else{
    swap(v[high],v[mid]);
    high--;
}
}
for(auto &it:v) cout<<it<<" ";
cout<<endl;
}
return 0;
}

// tc =o(n)
// sc=o(1)

