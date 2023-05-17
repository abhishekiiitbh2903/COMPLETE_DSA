#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
void pattern(int n ){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    char ch='A';
    int breakpoint=(2*i-1)/2;
    for(int j=1;j<=2*i-1;j++){
        cout<<ch;
       if(j<=breakpoint) ch++;
       else ch--;
    }
     for(int j=1;j<=n-i;j++){
        cout<<" ";
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
    pattern(n);
}
return 0;
}