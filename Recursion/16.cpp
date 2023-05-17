// String is Palindrome or Not 
#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
bool f(int i ,vector<char>& s, int n ){
    if(i>=n/2) return true ;
    if(s[i]!=s[n-i-1]) return false;
    return f(i+1,s,n);
}
signed main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector<char>s(n);
    for(auto &i:s) cin>>i;
     int x =f(0,s,n);
     (x==1)?cout<<"TRUE"<<endl:cout<<"FALSE"<<endl;
   
}
return 0;
}
// 125 leetcode Valid palindrome ....--> in this we will come to know about what are alphanumeric characters and how to check those //