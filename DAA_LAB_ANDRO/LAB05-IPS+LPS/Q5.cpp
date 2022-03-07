#include<iostream>
using namespace std;
int MatrixChainOrder(int p[], int n)
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

int main()
{
    int n;
    cout<<"Enter no. of matrices: "<<" ";
    cin>>n;
    int dimensions[2*n];
    int k = 0;
    for(int i = 0 ;i < n ;i++){
        cout<<"For matrix "<<(i+1)<<" , Enter dimensions: "<<" ";
        cin>>dimensions[k]>>dimensions[k+1];
        k = k + 2;
    }
    int arr[n+1];
    arr[0] = dimensions[0];
    int j = 1;
    for (int i = 1; i < (2*n); i = i+2)
    {
        arr[j] = dimensions[i];
        j++;
    }
    n = n + 1;
    printf("Minimum number of multiplications is %d ",
    MatrixChainOrder(arr, n));
    return 0;
}