// 1 2 3 4 5 
// after left rotation by 1 place 2 3 4 5 1 
// Let's write its optimal solution
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
     int temp=v[0];
     for(int i=1;i<n;i++){
        v[i-1]=v[i];
     }
     v[n-1]=temp;
      for(auto &it:v) cout<<it<<" ";
      cout<<endl;
 }
 return 0;
 }
// T.C - O(n)
// S.C. -O(1)