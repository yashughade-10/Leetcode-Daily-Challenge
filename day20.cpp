#include<bits/stdc++.h>
using namespace std;
    
int minimumLengthEncoding(vector<string>& words) {
    unordered_set<string> s(words.begin(), words.end());
    for(auto x : s){
        for(int i=1; i<x.size(); i++){
            s.erase(x.substr(i));
        }
    }
    int count = 0;
    for(auto x : s){
        count += 1+x.size();
    }
    return count;
}

int main(){

    vector<string> vec{"time", "me", "bell"};

    cout<<minimumLengthEncoding(vec);
    
    return 0;
}