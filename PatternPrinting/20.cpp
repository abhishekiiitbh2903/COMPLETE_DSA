#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
          cout<<"*";
        }
        for(int j=1;j<=2*i-2;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
          cout<<"*";
        }
        cout<<endl;
    }
}
void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          cout<<"*";
        }
        for(int j=1;j<=2*(n-i+1)-2;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
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
    print(n);
    print1(n);
}
return 0;
}