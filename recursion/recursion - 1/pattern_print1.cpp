// to print anyone from the following subsequences.
// this doesnt print all the subsequences that have the sum as 2. 

#include<bits/stdc++.h>
using namespace std;

bool prints(int index, vector<int> &ds, int s, int sum, int arr[], int n){
    if(index == n){
        if(s == sum){
            for(auto it: ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        //if the condition is not satisfied
        else return false;
    }
    ds.push_back(arr[index]);
    s+=arr[index];
    
    if(prints(index+1, ds, s, sum, arr, n) == true) return true;
    s-=arr[index];
    ds.pop_back();
    if(prints(index+1, ds, s, sum, arr, n) == true) return true;
    return false;

}

int main() {
    int arr[] = {1,2,1};
    int n = 3, sum=2;
    vector<int> ds;
    prints(0, ds, 0, sum, arr, n);
    return 0;

}