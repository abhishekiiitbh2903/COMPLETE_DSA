// Brute Force 
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// void Rotate_Array_By_K_Places(vector<int> &v, int n,int k){
//    // Rotating array by k times equivalent to rotaing it by k%n as after evry n rotations array will come to its original shape  
//    k%=n;
//   vector<int>temp;
//    for(int i=0;i<k;i++){
//      temp.push_back(v[i]);
//    }
//    for(int i=k;i<n;i++){
//     v[i-k]=v[i];
//    }
//    for(int i=n-k;i<n;i++){
//     v[i]=temp[i-(n-k)];
//    }
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// Rotate_Array_By_K_Places(v,n,6);
// for(auto &it:v) cout<<it<<" ";
// cout<<endl;
// }
// return 0;
// }

// let's compute the tc of this o(k)+o(n-k)+o(k) => O(n+k)
// Since we are using extra vector named temp so sc overall equate to o(n).

// Optimal Solution

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void Left_Rotate_Array_By_K_Places(vector<int> &v, int n,int k){
   // Rotating array by k times equivalent to rotaing it by k%n as after evry n rotations array will come to its original shape  
   k%=n;
   reverse(v.begin(),v.begin()+k);
   reverse(v.begin()+k,v.end());
   reverse(v.begin(),v.end());

}
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
Left_Rotate_Array_By_K_Places(v,n,2);
for(auto &it:v) cout<<it<<" ";
cout<<endl;
}
return 0;
}

// tc being o(k+n-k+n) =O(2n) slightly more than previous but here we have constant space complexity 
