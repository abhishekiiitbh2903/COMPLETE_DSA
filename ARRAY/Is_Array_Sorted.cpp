#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
bool isSorted(vector<int> &v, int n ){
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]) continue;
        else return false ;
    }
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    bool ans= isSorted(v,n);
    (ans==1)?cout<<"TRUE"<<endl:cout<<"FALSE"<<endl;
}
return 0;
}

// We are iterating once through entire array so O(n)
// S.C. o(1) as we are talking always about extra space whenever we are discussing space complexity..