#include <bits/stdc++.h>
using namespace std;
int MatrixChain_bfmcmp(int p[], int i, int j)
{
    if (i == j)
    return 0;
    int k;
    int min = INT_MAX;
    int count;
    for (k = i; k < j; k++)
    {
        count = MatrixChain_bfmcmp(p, i, k)
        + MatrixChain_bfmcmp(p, k + 1, j)
        + p[i - 1] * p[k] * p[j];
        if (count < min)
        min = count;
    }
    return min;
}
int MatrixChain_dyp(int p[], int n)
{
    int dp[n][n];
    for (int i=1; i<n; i++)
    dp[i][i] = 0;
    for (int L=1; L<n-1; L++){
        for (int i=1; i<n-L; i++){
             dp[i][i+L] = min(dp[i+1][i+L] + p[i-1]*p[i]*p[i+L],
    dp[i][i+L-1] + p[i-1]*p[i+L-1]*p[i+L]);
        }
    }
    return dp[1][n-1];
}
int main(){
    int bfmcmp[5], dyp[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"For Round - "<<(i+1)<<endl;
        int n = 3;
        int dimensions[2*n];
        int k = 0;
        for(int i = 0 ;i < 3 ;i++){
            cout<<"For matrix "<<(i+1)<<" , Enter dimensions: "<<" ";
            cin>>dimensions[k]>>dimensions[k+1];
            k = k + 2;
        }
        int arr[n+1];
        arr[0] = dimensions[0];
        int j = 1;
        for (int i = 1; i < (2*n); i = i+2){
            arr[j] = dimensions[i];
            j++;
        }
        n = n + 1;
        bfmcmp[i] = MatrixChain_bfmcmp(arr, 1, n - 1);
        dyp[i] = MatrixChain_dyp(arr, n);
    }
    cout<<"S.NO."<<"\t"<<"BFMCMP"<<"\t"<<"DYP"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<(i+1)<<"\t"<<bfmcmp[i]<<"\t"<<dyp[i]<<endl;
    }
}