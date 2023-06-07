// #include<bits/stdc++.h>
// using namespace std ;
// #define long long int int;
// vector<int>SpiralPrinter(vector<vector<int>> &matrix, int n , int m ){
// int left=0;
// int top=0;
// int right=m-1;
// int bottom=n-1;
// int direction=0;
//        vector<int>result;
//       while(top<=bottom &&left<=right){
//          if(direction==0){
//           for(int i=left;i<=right;i++){
//               result.emplace_back(matrix[top][i]);
//           }
//           top++;
//          }
//          if(direction==1){
//              for(int i=top;i<=bottom;i++){
//                  result.emplace_back(matrix[i][right]); 
//              }
//              right--;
//          }
//          if(direction==2){
//              for(int i=right;i>=left;i--){
//                result.emplace_back(matrix[bottom][i]);   
//              }
//              bottom--;
//          }
//          if(direction==3){
//           for(int i=bottom;i>=top;i--){
//                  result.emplace_back(matrix[i][left]); 
//              } 
//              left++;  
//          }
//          direction++;
//          if(direction==4) direction=0;
//       }
//       return result;  
// }
// signed main(){
// int t;
// cin>>t;
// while(t--){
// int n,m ;
// cin>>n>>m;
// vector<vector<int>>mat(n,vector<int>(m));
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>mat[i][j];
//     }
// }
// vector<int>ans =SpiralPrinter(mat,n,m);
// for(auto &vec:ans){
//   cout<<vec<<" ";
// }
// cout<<endl;
// }
// return 0;
// }

// Above discussed approach is of CODESTORYWITHMIK which handles every corner cases 

// Let's discuss striver's solution 

#include<bits/stdc++.h>
using namespace std ;
#define long long int int;
vector<int>SpiralPrinter(vector<vector<int>> &matrix, int n , int m ){
int left=0;
int top=0;
int right=m-1;
int bottom=n-1;
       vector<int>result;
      while(top<=bottom &&left<=right){
          for(int i=left;i<=right;i++){
              result.emplace_back(matrix[top][i]);
          }
          top++;
         
             for(int i=top;i<=bottom;i++){
                 result.emplace_back(matrix[i][right]); 
             }
             right--;
             if(top<=bottom){
                for(int i=right;i>=left;i--){
               result.emplace_back(matrix[bottom][i]);   
             }
             bottom--;
             }
         
          if(left<=right){ for(int i=bottom;i>=top;i--){
                 result.emplace_back(matrix[i][left]); 
             } 
             left++;  
          }
      }
      return result;  
}
signed main(){
int t;
cin>>t;
while(t--){
int n,m ;
cin>>n>>m;
vector<vector<int>>mat(n,vector<int>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];
    }
}
vector<int>ans =SpiralPrinter(mat,n,m);
for(auto &vec:ans){
  cout<<vec<<" ";
}
cout<<endl;
}
return 0;
}

// tc =o(m*n) every element is iterated once 
// sc=o(n) to return answer 
