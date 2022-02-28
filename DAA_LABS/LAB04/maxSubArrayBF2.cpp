#include <bits/stdc++.h>
#include<climits>
using namespace std;
int max_subarraysum(int arr[],int n)
{
    int smax=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            smax=max(smax,sum);
        }
    }
    return smax;
}
int main()
{
    int n;
    int arr1[10];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int maxi;
    maxi=max_subarraysum(arr1,n);
    cout<<maxi;
    return 0;
}