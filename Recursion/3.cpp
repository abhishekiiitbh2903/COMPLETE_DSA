// print name n times using recursion 
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void printName(int i , int n){
    if(i<1) return;
    cout<<"Abhishek Singh "<<endl;
    printName(i-1,n);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ; cin>>n;
    printName(n,n);
}
return 0;
}