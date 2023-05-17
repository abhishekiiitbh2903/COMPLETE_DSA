#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int CountNumber(int  n){
    int count =0;
while(n){
 count++;
n/=10;
}
return count;
}
signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout << CountNumber(n);

}
return 0;
}