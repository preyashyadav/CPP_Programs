#include<iostream>
using namespace std;
int MatrixChainOrder(int p[], int n)
{
    int dp[n][n];
    for (int i=1; i<n; i++)
    dp[i][i] = 0;
    for (int L=1; L<n-1; L++)
    for (int i=1; i<n-L; i++)
    dp[i][i+L] = min(dp[i+1][i+L] + p[i-1]*p[i]*p[i+L],
    dp[i][i+L-1] + p[i-1]*p[i+L-1]*p[i+L]);
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
        cout<<"For matrix "<<(char)(i+'A')<<" , Enter dimensions: "<<" ";
        cin>>dimensions[k]>>dimensions[k+1];
        k = k + 2;
    }
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,1,5};
    int arr3[] = {1,3,2,4,5};
    int arr4[] = {2,3,4,5,1};
    int arr5[] = {3,4,5,2,1};
    n = n + 1;
    printf("For ((AB)C)D, the min. multiplications are = %d\n",MatrixChainOrder(arr1, n));
    printf("For (A(BC))D, the min. multiplications are = %d\n",MatrixChainOrder(arr2, n));
    printf("For (AB)(CD), the min. multiplications are = %d\n",MatrixChainOrder(arr3, n));
    printf("For A((BC)D), the min. multiplications are = %d\n",MatrixChainOrder(arr4, n));
    printf("For A(B(CD)), the min. multiplications are = %d\n",MatrixChainOrder(arr5, n));
    return 0;
}