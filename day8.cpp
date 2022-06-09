#include <bits/stdc++.h>
using namespace std;
int removePalindromeSub(string s) {
    int i=0, j=s.size()-1;
        bool isPal = true;
        while(i <= j){
            if(s[i] != s[j]){
                isPal = false;
            }
            i++;
            j--;
        }
        
        if(isPal)
            return 1;
        return 2;
}
int main(){
    cout<<removePalindromeSub("abb");
}