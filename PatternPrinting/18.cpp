#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void print (int n){
    for(int i=1;i<=n;i++){
          for(char ch='E'-i+1;ch<='E';ch++){
              cout<<ch<<" ";
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