#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void print1(int n ){
    for ( int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print2(int n ){
    for ( int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
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
    print1(n);
    print2(n-1);
}
return 0;
}