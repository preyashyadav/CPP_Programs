#include<bits/stdc++.h>
using namespace std;
int kadanes(int arr[],int n)
{
    int maxsofar=INT_MIN;
    int maxending=0;
    for(int i=0;i<n;i++)
    {
        maxending+=arr[i];
        if(maxsofar<maxending)
        {
            maxsofar=maxending;
        }
        if(maxending<0)
        {
            maxending=0;
        }
    }
    return maxsofar;
}
int main()
{
 int n,arr[10];
 cin>>n;
 for(int i=0;i<n;i++)
 {
 cin>>arr[i];
 }
 int maximum=kadanes(arr,n);
 cout<<maximum;
 return 0;
}