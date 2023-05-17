#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void prime(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
       if(n%i==0){
        if(n/i!=i) count+=2;
        else count+=1;
       }
        }
    if(count>2) cout<<"NOT PRIME";
    else cout<<"PRIME";
    }
signed main(){
int t;
cin>>t;
while(t--){
    int n ; 
    cin>>n;
    prime(n);
    cout<<endl;
}
return 0;
}