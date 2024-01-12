//to find the array that shows the nearest smallest element to the right.

#include<bits/stdc++.h>
using namespace std;

vector<int> nsl(vector<int> arr){
    vector<int> res;
    stack<int> s;
    for(int i=arr.size()-1; i>=0; i--){
        while(!s.empty() && s.top()>=arr[i]){s.pop();}
        if(s.empty()) res.push_back(-1);
        else res.push_back(s.top());
        s.push(arr[i]);
    }
    return res;
}

int main(){
    vector<int> arr = {4, 5, 2, 10, 8};   //ans should be {-1, 4, -1, 2, 2}
    vector<int> res = nsl(arr);
    reverse(res.begin(), res.end());
    for(auto &it:res) cout<<it<<" ";
    return 0;
}
