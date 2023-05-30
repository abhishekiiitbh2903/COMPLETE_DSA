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
int maxi=INT_MIN;
for(auto &it:v) cin>>it;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=v[k];
        }
     maxi=max(maxi,sum);
    }
}
cout<< maxi<<endl;;
}
return 0;
}

// Above is Brute Force Approach wherein we have generated all subarrays and calculated their sum and compared with maxi and as soon as we get any value greater than maxi then we update maxi with that sum and at the end we will be having our ans with us 

// T.C. =o(n^3)
// S.C. =o(1)



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
int maxi=INT_MIN;
for(auto &it:v) cin>>it;
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
       sum+=v[j];
     maxi=max(maxi,sum);
    }
}
cout<< maxi<<endl;;
}
return 0;
}

// Same Intuition as we discussed just above 
// t.c.=o(n^2)
//s.c.=o(1)

// Optimal Solution 
// Kadane's Algorithm
// INTUITION:
// we will follow one rule just as there is no advantage of carrying negative sum as it will just decrease sum so whenever sum goes beyond 0 we will drop that sum and reinitialise sum as 0



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
int sum=0;
int maxi=INT_MIN;
for(int i=0;i<n;i++){
  sum+=v[i];
  maxi=max(maxi,sum);
  if(sum<0){
    sum=0;
  }
}
cout<<maxi<<endl;
}
return 0;
}

// We just iterated through array once whih cost us overall tc as o(n)
// sc= o(1)
