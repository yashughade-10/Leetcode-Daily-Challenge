#include<bits/stdc++.h>
using namespace std;
    
int maximumUniqueSubarray(vector<int>& nums) {
    int a[10001] = {0};
    int prev = 0, sum = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int x = nums[i]; 
        if (a[x] != 0){ 
            int t = a[x]; 
            while (prev < t) 
                sum -= nums[prev++]; 
        }
        a[x] = i + 1;        
        sum += x;            
        ans = max(ans, sum); 
    }
    return ans;
}

int main(){

    vector <int> a = {4,2,4,5,6};

    cout<<maximumUniqueSubarray(a);
    
    return 0;
}