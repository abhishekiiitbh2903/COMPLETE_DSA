#include<bits/stdc++.h>
using namespace std ;
int main(){
    int yr;
    cin>>yr;
    cout<<(yr%4==0 ?(yr%100==0?(yr%400==0 ? "leap":"notleap"):"leap"):"notleap");
}