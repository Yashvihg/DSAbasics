//next greatest element to the left.
// https://www.studymite.com/next-greater-to-left/

#include<bits/stdc++.h>
using namespace std;

vector<int> ngl(vector<int> arr){
    int n = arr.size();
    stack<int> s;
    vector<int> res;
    for(int i=0; i<n; i++){
        //if(!s.empty()){  //--> reduces the iterations. 
            while(!s.empty() && s.top()<=arr[i]){
                s.pop();
            }
        //}
        if(s.empty()) 
            res.push_back(-1);
            else res.push_back(s.top());
        s.push(arr[i]);
    }
    return res;
}

int main(){
   /* int n; 
    cin>>n;
    // vector<int> arr(n, 0);
    vector<int> arr;
    int ele;
    for(int i=0; i<n; i++){
        cin>>ele;
        arr.push_back(ele);
    } */
    vector<int> arr = {1,3,2,4};
    // vector<int> arr = {100, 80, 60, 70, 60, 75, 85};
    vector<int> res = ngl(arr);
    for(auto &it:res) cout<<it<<" ";
    return 0;
}