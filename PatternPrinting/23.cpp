#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void print(int n ){
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int top=i-1;
            int bottom=(2*n-1)-i;
            int left=j-1;
            int right=(2*n-1)-j;
            int val=min(min(top,bottom),min(left,right));
            cout<<n-val;
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