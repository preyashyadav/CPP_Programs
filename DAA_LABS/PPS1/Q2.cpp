#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(vector<int> &arr)
{
    int i, j;
    int n = arr.size();
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
            swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {02, 11, 29, 06, 07};
    bubbleSort(arr);
    cout<<"The sorted array: \n";
    for(auto i: arr)cout << i << " ";
    return 0;
}