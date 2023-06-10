// There will be a number from 1 to n in which 1 number will be repeating one and other will be the missing one . We will have to return in the sequence of {repeating,missing}
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<int>func(vector<int> &v, int n ){
// int repeating=-1,missing=-1;
// for(int i=1;i<=n;i++){
//     int cnt=0;
//     for(int j=0;j<n;j++){
//         if(v[j]==i) cnt++;
//     }
//         if(cnt==2) repeating=i;
//         if(cnt==0) missing=i;
//     if(repeating!=-1 && missing!=-1) break;
// }
// return {repeating,missing};
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// vector<int>ans=func(v,n);
// for(auto &it:ans) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

// t.c.===>o(n^2)
// s.c ===>o(1)


// let's use hashing technique now 

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<int>func(vector<int> &v, int n ){
// int repeating=-1,missing=-1;
// vector<int>hash(n+1,0);
// for(auto &it:v) hash[it]++;
// for(int i=1;i<=n;i++){
//     if(hash[i]==2) repeating=i;
//     else if (hash[i]==0) missing=i;
//     if(repeating!=-1 && missing!=-1) break;
// }
// return {repeating,missing};
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// vector<int>ans=func(v,n);
// for(auto &it:ans) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

// tc=o(n)
// sc=o(n)


// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<int>func(vector<int> &v, int n ){
//  int Sn=(n*(n+1))/2;
//  int S2n=(n*(n+1)*(2*n+1))/6;
//  int S=0,S2=0;
//  for(int i=0;i<n;i++){
//     S+=v[i];
//     S2+=v[i]*v[i];
//  }
//  int val1 =S-Sn; // x-y  ---1
//  int val2=S2-S2n;// x^2-y^2
//  val2/=val1; //x+y ---2 
//  int repeating=(val1+val2)/2;
//  int missing=val2-repeating;
//  return {repeating,missing};
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// vector<int>ans=func(v,n);
// for(auto &it:ans) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

// tc=o(n)
// sc=o(1)

// Last Approach using xor , quite complex 



#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
vector<int>func(vector<int> &v, int n ){
   int xr =0;
for(int i=0;i<n;i++){
   xr^=v[i];
   xr^=(i+1);
}
int diff_bit=0;
while(1){
   if((xr&(1<<diff_bit))!=0){
      break;
   }
   diff_bit++;
}
int zero=0,one=0;
for(int i=0;i<n;i++){
   // Part of 1 club
   if((v[i]&(1<<diff_bit))!=0){
     one^=v[i];
   }
   // Part of zero club
   else{
      zero^=v[i];
   }
}
for(int i=1;i<=n;i++){
    if((i&(1<<diff_bit))!=0){
     one^=i;
   }
   // Part of zero club
   else{
      zero^=i;
   }
}
// Confirmation
int cnt =0;
for(int i=0;i<n;i++){
   if(v[i]==zero) cnt++;
}
if(cnt==2) return{zero,one};
else return {one,zero};
}
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
vector<int>ans=func(v,n);
for(auto &it:ans) cout<<it<<" ";
cout<<endl;
}
return 0;
}
