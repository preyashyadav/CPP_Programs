#include <iostream>
using namespace std;
int Sol(int n)
{
    int ans = 0;
    for (int x = 0; x*x < n; x++){
        for (int y = 0; x*x + y*y < n; y++){
        ans++;
        }
    }  
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout << "The number of inequality solutions are: "<< Sol(n) << endl;
    return 0;
}