#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void selection_sort(vector<int> &v, int n ){
for(int i=0;i<=n-2;i++){
    int mini=i;
    for(int j=i;j<=n-1;j++){
        if(v[j]<v[mini]){
            mini=j;
        }
    }
    // Swapping(v[mini]and v[i])
    int temp=v[mini];
    v[mini]=v[i];
    v[i]=temp;
}
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    selection_sort(v,n);
    for(auto &it:v) cout<<it<<" ";
}
return 0;
}