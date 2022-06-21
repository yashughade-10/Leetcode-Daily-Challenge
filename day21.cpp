#include<bits/stdc++.h>
using namespace std;
    
int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
    int hmsum=0;
    int i=0;
    priority_queue<int> heap;
    while(i<heights.size()-1){
        if(heights[i]<heights[i+1]){
            hmsum += heights[i+1]-heights[i];
            heap.push(heights[i+1]-heights[i]);
            while(hmsum>bricks and ladders>0){
                hmsum -= heap.top();
                heap.pop();
                ladders -= 1;
            }
            if(hmsum > bricks and ladders==0){
                break;
            }
        }
        i = i+1;
    }
    return i;
}
    
int main(){

    vector<int> height = {4,12,2,7,3,18,20,3,19};
    int bricks = 10;
    int ladders = 2;

    cout<<furthestBuilding(height, bricks, ladders);
    
    return 0;
}