#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void insertion_sort(vector<int>& v , int n ){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while( j>0 && (v[j-1]>v[j])){
            // swap(v[j-1],v[j]);
            int temp=v[j-1];
            v[j-1]=v[j];
            v[j]=temp;
            j--;
        }
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
    insertion_sort(v,n);
    for(auto &it:v) cout<<it<<" ";
    cout<<endl;
}
return 0;
}