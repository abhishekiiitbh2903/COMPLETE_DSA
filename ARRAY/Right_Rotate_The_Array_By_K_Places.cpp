 #include<bits/stdc++.h>
 using namespace std ;
 #define long long int int;
 void Right_Rotate_Array_By_K_Places(vector<int> &v, int n,int k){
   // Rotating array by k times equivalent to rotaing it by k%n as after evry n rotations array will come to its original shape  
   k%=n;
 reverse(v.begin(),v.begin()+n-2);
 reverse(v.begin()+n-2,v.end());
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
 Right_Rotate_Array_By_K_Places(v,n,2);
 for(auto &i:v) cout<<i<<" ";
 }
 return 0;
 }