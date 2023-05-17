#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
int ReverseNumber(int  n){
int num=0;
int rem=0;
//while(n) tackle both positive and negative case while (n>0) tackle only positive cases .
while(n){
rem=n%10;
num=(num*10)+rem;
n/=10;
}
return num;
}
signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout << ReverseNumber(n);

}
return 0;
}