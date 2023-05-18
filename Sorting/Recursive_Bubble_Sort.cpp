#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void Recursive_Bubble_Sort(vector<int> &v ,int endIndex){
if(endIndex==0) return;
for(int i=0;i<endIndex;i++){
    if(v[i]>v[i+1]){
        // swap(v[i],v[i+1]); 
        int temp=v[i];
        v[i]=v[i+1];
        v[i+1]=temp;
    }
}
Recursive_Bubble_Sort(v,endIndex-1);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    Recursive_Bubble_Sort(v,n-1);
    for(auto &it:v) cout<<it<<" ";
    cout<<endl;
}
return 0;
}