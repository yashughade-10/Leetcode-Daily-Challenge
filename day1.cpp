#include<bits/stdc++.h>
using namespace std;
    
vector<int> runningSum(vector<int>& nums){
    for(int i=1; i<nums.size(); i++){
        nums[i] += nums[i-1];
    }
    return nums;
}

int main(){

    vector<int> nums={1,2,3,4};
    vector<int> res= runningSum(nums);

    for(int i=0;i<res.size()-1;i++) cout<<res[i]<<" ";

    cout<<res.back();
    
    return 0;
}