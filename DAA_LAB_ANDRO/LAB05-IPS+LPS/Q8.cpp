#include <iostream>
using namespace std;
unsigned long int catalan(unsigned int n)
{
if (n <= 1)
return 1;
unsigned long int res = 0;
for (int i = 0; i < n; i++)
res += catalan(i) * catalan(n - i - 1);
return res;
}
int main()
{
    cout<<"S.No."<<"\t\t"<<"Nth Catalan Number"<<endl;
    for (int i = 1; i <= 10; i++)
         cout<<i<<"\t\t"<<catalan(i)<<endl;
    return 0;
}