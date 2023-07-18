//m is the number of bouquets we require and k is the number of adjancents flowers required to create that bouquets 
// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// bool possible(vector<int> &v, int day, int m , int k){
//     int bouqet=0,count=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]<=day){
//             count++;
//         }
//         else{
//           bouqet+=count/k;
//           count=0;
//         }
//     }
//     bouqet+=count/k;
//     return bouqet==m;
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,m,k;
// cin>>n>>m>>k;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// if(m*k>n){
//     cout<<-1<<endl;
// }
// else{
// int minElement=*min_element(begin(v),end(v));
// int maxElement=*max_element(begin(v),end(v));
// for(int i=minElement;i<=maxElement;i++){
//     if(possible(v,i,m,k)==true){
//         cout<<i<<endl;
//         break;
//     }
// }
// }
// }
// return 0;
// }

// O(n*2) 


#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
bool possible(vector<int> &v, int day, int m , int k){
    int bouqet=0,count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<=day){
            count++;
        }
        else{
          bouqet+=count/k;
          count=0;
        }
    }
    bouqet+=count/k;
    return bouqet==m;
}
signed main(){
int t;
cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
vector<int>v(n);
for(auto &it:v) cin>>it;
if(m*k>n){
    cout<<-1<<endl;
}
else{
int minElement=*min_element(begin(v),end(v));
int maxElement=*max_element(begin(v),end(v));
int low =minElement;
int high=maxElement;
int ans =maxElement;
while(low<=high){
    int mid=(low+high)/2;
    if(possible(v,mid,m,k)==true){
       ans=mid;
       high=mid-1;
    }
    else{
        low=mid+1;
    }
}
cout<<ans<<endl;
}
}
return 0;
}

// O(nlogN) 

