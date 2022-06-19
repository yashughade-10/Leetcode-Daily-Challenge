#include<bits/stdc++.h>
using namespace std;
    
vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
    sort(products.begin(), products.end());
    vector<vector<string>> res;
    int start, bsStart = 0, n=products.size();
    string prefix;
    for (char &c : searchWord) {
        prefix += c;

        start = lower_bound(products.begin() + bsStart, products.end(), prefix) - products.begin();

        res.push_back({});
        for (int i = start; i < min(start + 3, n) && !products[i].compare(0, prefix.length(), prefix); i++)
            res.back().push_back(products[i]);

        bsStart = start;
    }
    return res;
}
    
int main(){

    vector<string> vect
    {
        {"mobile"},
        {"mouse"},
        {"moneypot"},
        {"monitor"},
        {"mousepad"}
    };

    string target = "mouse";
    for(vector<string> vec1 : suggestedProducts(vect, target)){
        for(string x : vec1){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}