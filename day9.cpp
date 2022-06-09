#include <bits/stdc++.h>
using namespace std;
vector <int> targetSum(vector <int> &numbers , int &target)
{
    int i =0,j = numbers.size()-1;
        
        while(i<j){
            int k = numbers[i] + numbers[j];
            if (k == target) {
               vector<int> ans{i+1,j+1}; 
               return ans;
            }
            if(k<target){
                i++;
            } else {
                j--;
            }
        }
        
        return numbers; 
}
int main()
{
    vector <int> a = {1 , 4 , 5 , 11 , 12};
    int target = 9;
    for(int &x : targetSum(a , target))
        cout << x << " ";
    cout << '\n';
}