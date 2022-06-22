#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());        
    return nums[nums.size()-k];
}

int main(){

    vector<int> num = {3,2,1,5,6,4};
    int k=2;

    cout<<findKthLargest(num, k);
    
    return 0;
}