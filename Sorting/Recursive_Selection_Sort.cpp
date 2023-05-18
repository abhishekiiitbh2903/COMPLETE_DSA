#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void Recursive_Selection_Sort(vector<int>& v , int start , int size){
    if(start>=size) return;
    int mini=start;
    for(int i= start;i<size;i++){
        if(v[i]<v[mini]){
            mini=i;
        }
    }
    // swap(v[start],v[mini]); 
    int temp =v[start];
    v[start]=v[mini];
    v[mini]=temp;
    Recursive_Selection_Sort(v,start+1,size);

}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    Recursive_Selection_Sort(v,0,n);
    for(auto &it:v) cout<<it<<" ";
    cout<<endl;
}
return 0;
}