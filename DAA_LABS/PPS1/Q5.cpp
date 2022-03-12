#include<iostream>
using namespace std;
void sort(int a[],int arr[],int l){
    int key,j,order;
    for (int i=1;i<l;i++){
        key=a[i];
        order=arr[i];
        j=i-1;
        while(j>=0 && a[j]<key){
            a[j+1]=a[j];
            arr[j+1]=arr[j];
            j--;
        }
        a[j+1]=key;
        arr[j+1]=order;
    }
    }
void display(int a[],int l){
    for (int i=0;i<l;i++){
        cout<<a[i]<<endl;
    }
}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int i,arr[]={27,39,1, 55, 124},arrange[20];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++)
    {
        arrange[i]=arr[i]%10;
    }
    sort(arrange,arr,size);
    printArray(arr,size);
}