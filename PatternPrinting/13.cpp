#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int start=1;
void print (int n ){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          cout<<start<<" ";
          start++;
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