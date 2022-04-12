#include <bits/stdc++.h>
using namespace std; 
#define N 6	
struct activity 
{ 
    int start, finish; 
}; 
bool activitySort(activity s1, activity s2) 
{ 
    return (s1.finish< s2.finish); 
} 
void maxActivityPrint(activity arr[], int n) 
{
	sort(arr, arr+n, activitySort); 

	cout<< "Following activities are selected \n"; 

    int i = 0; 
	cout<< "(" <<arr[i].start<< ", " <<arr[i].finish << ")\n"; 
    for (int j = 1; j < n; j++) 
    {
      	if (arr[j].start>= arr[i].finish) 
      	{	 
			cout<< "(" <<arr[j].start<< ", "<<arr[j].finish << ") \n"; 
			i = j; 
      	} 
    } 
} 
int main() 
{ 
    activity arr[N];
	for(int i=0; i<=N-1; i++)
	{
		cout<<"Enter the start and end time of "<<i+1<<" activity \n";
		cin>>arr[i].start>>arr[i].finish;
    }
	maxActivityPrint(arr, N); 
    return 0; 
}


