#include<iostream>
#include<vector>
using namespace std;
void salaryComparison(vector<int> const &nums, int low, int high, int &min, int &max)
{
    if (low == high)                    
    {
        if (max < nums[low]) {          
            max = nums[low];
        }
 
        if (min > nums[high]) {          
            min = nums[high];
        }
 
        return;
    }
 
    // if the array contains only two elements
 
    if (high - low == 1)                
    {
        if (nums[low] < nums[high])       
        {
            if (min > nums[low]) {       
                min = nums[low];
            }
 
            if (max < nums[high]) {      
                max = nums[high];
            }
        }
        else {
            if (min > nums[high]) {     
                min = nums[high];
            }
 
            if (max < nums[low]) {       
                max = nums[low];
            }
        }
        return;
    }
 
    // find the middle element
    int mid = (low + high) / 2;
 
    // recur for the left subarray
    salaryComparison(nums, low, mid, min, max);
 
    // recur for the right subarray
    salaryComparison(nums, mid + 1, high, min, max);
}

class empDets{
    public:
    string name;
    int age;
    int salary;
};


int main(){
    int noOfEmp;
    cin>>noOfEmp;
    empDets emp[100];
    for(int i=0;i<noOfEmp;i++){
        cin>>emp[i].name;
        cin>>emp[i].age;
        cin>>emp[i].salary;
    }
    vector<int>empSal;
    for(int i=0;i<noOfEmp;i++){
        empSal.push_back(emp[i].salary);
    }
    
    int minSal=99999999,maxSal=-999999;
    salaryComparison(empSal,0,noOfEmp-1,minSal,maxSal);
    
    for(int i=noOfEmp-1;i>-1;--i){
        if(emp[i].salary==maxSal)
        cout<<emp[i].name<<" ";
        if(emp[i].salary!=maxSal && emp[i].salary!=minSal  )
        cout<<emp[i].name<<" ";
        if(emp[i].salary==minSal)
        cout<<emp[i].name;
    }
}