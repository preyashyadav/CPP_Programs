#include <bits/stdc++.h>
#include<climits>
using namespace std;
int max_subarraysum(int arr[],int n)
{
    int ans=INT_MIN;
    for(int sas=1;sas<=n;++sas)
        {
        for(int si=0;si<n;++si)
        {
            if((si+sas)>n)
            {
                break;
            }
            int sum=0;
            for(int i=0;i<(si+sas);i++)
            sum+=arr[i];
            ans=max(ans,sum);  
        }
    }
    return ans;
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