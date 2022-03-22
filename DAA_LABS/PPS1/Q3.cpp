#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {2,3,8,6,1};
    vector<pair<int,int>> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(i<j && arr[i]>arr[j]){
                    ans.push_back(make_pair(i, j));
                }
            else {
                continue;
            }
        }
    }
    for(auto i:ans){
    cout << i.first + 1 << " " << i.second + 1 << endl;
    }
    return 0;
}