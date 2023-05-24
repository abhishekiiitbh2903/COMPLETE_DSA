// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// signed main(){
// int t;
// cin>>t;
// while(t--){
//     int n ;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &it:v) cin>>it;
//     set<int>st;
//     for(auto &it:v) st.insert(it); // O(nlogn)
//     vector<int> result;
//     for(auto &it:st){
//         result.push_back(it); // O(n)
//     }
//     for(auto &it: result) cout<<it<<" ";
//     cout<<endl;
// }
// return 0;
// }

// Above is Brute force Approach for removing duplicates , It takes time of O(nlogn+n) and sc of O(n) as we are using extra data structure i.e. Set 

// Optimal Solution

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &i:arr) cin>>i;
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    int size =i+1;
    cout<<size<<endl;
for(int k=0;k<size;k++){
    cout<<arr[k]<<" ";
}
cout<<endl;
}
return 0;
}
