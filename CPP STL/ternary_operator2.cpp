#include<bits/stdc++.h>
using namespace std ;
int main(){
    int yr;
    cin>> yr;
     (yr%4==0) ? (yr%100!=0? cout<<"The yr "<<yr<<" is a leap yr"
     : (yr%400==0 ? cout<<"The yr "<<yr<<" is a leap yr"
         : cout<<"The yr "<<yr<<" is not a leap yr"))
             : cout<<"The yr "<<yr<<" is not a leap yr";
}
