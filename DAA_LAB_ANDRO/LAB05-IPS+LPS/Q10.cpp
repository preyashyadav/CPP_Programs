#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"S.NO"<<"\t\t"<<"N"<<"\t\t"<<"Brute Force"<<"\t"<<"Dynamic Programming"<<endl;
    for(int i = 1; i <= 10; i++){
    cout<<i<<"\t\t"<<i<<"\t\t"<<pow(2,i)<<"\t\t"<<pow(i,3)<<endl;
    }
    return 0;
}