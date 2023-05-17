// Worst And Average Case :O(n^2) 
// Best case:O(n) 
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void bubble_sort(vector<int>& v,int n){
    for(int i=n-1;i>=0;i--){
        bool swap=false;
        for(int j=0;j<=i-1;j++){
            if(v[j]>v[j+1]){
                // Swapping
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                swap=true;
            }
        }
        if(!swap) break;
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
    bubble_sort(v,n);
    for(auto &it:v) cout<<it<<" ";
    cout<<endl;
}
return 0;
}