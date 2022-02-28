#include <bits/stdc++.h>
#include<climits>
using namespace std;
int max_subarraysum(int arr[],int n)
{
 int meh[n];
 meh[0]=arr[0];
 for(int i=1;i<=n-1;i++)
 {
 if(meh[i-1]>0)
 {
 meh[i]=arr[i]+meh[i-1];
 }
 else
 meh[i]=arr[i];
 }
 int ans=INT_MIN;
 for(int i=0;i<=n-1;i++)
 {ans=max(ans,meh[i]);}
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
