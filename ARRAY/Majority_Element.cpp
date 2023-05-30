// here we have to return that element whose frequency is greater than n/2 where n is the size of the array

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// bool flag =true;
// for(auto &it:v) cin>>it;
// for(int i=0;i<n;i++){
//     int x=v[i];
//     int count=0;
//     for(int j=i;j<n;j++){
//         if(v[j]==x) count++;
//     }
//     if(count>(v.size()/2)) {
//     cout<<x<<endl;
//       flag=false;
//       break;
//     }
// }
// if(flag) cout<<"NO SUCH VALUE"<<endl;
// }
// return 0;
// }

// Brute Force 
// tc=o(n^2)
// sc=o(1)

// here we are dealing with counting of frequency so how can we forget to use map 
// let's go

// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n ;
// cin>>n;
// vector<int>v(n);
// for(auto &it:v) cin>>it;
// map<int,int>mp;
// bool flag=true;
// for(auto &it:v) mp[it]++;
// for(auto &it:mp){
//     if(it.second>(v.size()/2)){
//         cout<<it.first<<endl;
//         flag=false;
//     }
// }
// if(flag) cout<<"NO SUCH VALUE"<<endl;
// }
// return 0;
// }

// tc =o(nlogn) filling the map + o(n) iterating the map
// sc=o(n) as in worst case each element of array can be unique

// Optimal Approach =====> Voting Algorithm <=======
// Intuition : We will find the probable element which can have frequency greater than n/2 

// We will use +- concept as all elements which will have frequency less than n/2 there will be their counterpart //present in array to cancel it out 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
vector<int>v(n);
for(auto &it:v) cin>>it;
int count=0,ele=-1;
for(int i=0;i<n;i++){
  if(count==0){
    ele=v[i];
    count++;
  }
  if(v[i]==ele) count++;
  else count--;
}
int probable_answer=ele;
//Verification
int count1=0;
for(int i=0;i<n;i++){
if(v[i]==ele) count1++;
}
if(count1>(v.size()/2))cout<<ele<<endl;
else cout<<"NO SUCH ELEMENT EXISTS"<<endl;
}
return 0;
}

// T.C. = o(n)+o(n) each for implementing voting algo and then validating whether the probable answer can be answer or not . If in Question , It would be specifically mentioned that majority element will exist then we need not to spend extra o(n) in validating the probable answer so our tc will be somewhere around o(n)

//S.C. =o(1) no extra space we are taking 


