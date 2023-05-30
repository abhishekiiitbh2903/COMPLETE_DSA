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
// // Step 1 . Store the non zero elements 
// vector<int>nonzero;
// for(auto &i: v){
//     if(i!=0) nonzero.push_back(i);
// }
// // Step 2 . alter the original vector
// int size=nonzero.size();
// for(int i=0;i<size;i++){
//     v[i]=nonzero[i];
// }
// // Step 3 . pushing all zeroes
// for(int i=size;i<n;i++){
//     v[i]=0;
// }
// for(auto &it:v) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

// time complexity is o(n+size+n-size)==o(2n)
// Extra space we are using in order to store non zero elements so o(n)


// Let's Write the optimal Solution

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
// 1. Finding the first zero element
int j;
  for(int i=0;i<n;i++){
    if(v[i]==0) {
        j=i;
        break;
    }
  }
  if(j==-1) cout<<"No Zeroes in Array "<<endl;
  // 2> Swapping the non zero and zero value such that we'll bring non zero to front and zero to back 
for(int i=j+1;i<n;i++){
    if(v[i]!=0){
        swap(v[i],v[j]);
        j++;
    }
}
for(auto &it:v) cout<<it<<" ";
cout<<endl;
}
return 0;
}

// tc is o(n) as we are starting second loop from j+1 so in overall we are iterating through vector only once 
// sc is o(1) as no extra space 