#include <bits/stdc++.h>
using namespace std;
int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
    return 0;
    int k;
    int min = INT_MAX;
    int count;
    for (k = i; k < j; k++)
    {
        count = MatrixChainOrder(p, i, k)
        + MatrixChainOrder(p, k + 1, j)
        + p[i - 1] * p[k] * p[j];
        if (count < min){
            min = count;
        }
    }
    return min;
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
    for (int i = 1; i < (2*n); i = i+2){
        arr[j] = dimensions[i];
        j++;
    }
    n = n + 1;
    cout << "Minimum number of multiplications is "
    << MatrixChainOrder(arr, 1, n - 1);
}
