#include<iostream>
#include<string>
using namespace std;

int LCSLength(string X, string Y){
 int m = X.length(), n=Y.length();
 int lookup[m+1][n+1];
 for(int i=0; i<=m;i++){
     lookup[i][0]=0;
 }
 for(int j=0; j<=n;j++){
     lookup[j][0]=0;
 }
 for(int i=1; i<=m; i++){
     for(int j=1; j<=n ; j++){
         if(X[i-1]==Y[j-1]){
             lookup[i][j] = lookup[i-1][j-1]+1;
         }
         else{
             lookup[i][j]= max(lookup[i-1][j], lookup[i][j-1]);
         }
     }
 }
return lookup[m][n];
}

int main(){
    string X="XMJYAUZ",Y="MZJAWXU";
    cout<<"The length of the LCS is:"<<LCSLength(X,Y);
    return 0;
}