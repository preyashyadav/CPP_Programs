#include<iostream>
using namespace std;
int func(string a, string b, int m, int n)
{
    if (n == 0 || m == 0)
        return 0;

    if (a[m - 1] == b[n - 1])
    {
        return func(a, b, m - 1, n - 1) + 1;
    }
    return max(func(a, b, m - 1, n), func(a, b, m, n - 1));
}

int main(){
    string a, b;
    cin >> a >> b;
    int n= a.length();
    int m=b.length();

    cout<<"The longest common subsequence is: ";
    cout<< func(a,b,n,m)<<endl;
    cout<< func(a, b, n, m);
    return 0;
}