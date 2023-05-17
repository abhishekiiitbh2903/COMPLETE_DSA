#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void print(int n ){
     for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==1||i==n||j==1||j==n) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    print(n);
}
return 0;
}