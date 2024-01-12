#include<bits/stdc++.h>
using namespace std;

void prints(int index, vector<int> &ds, int s, int sum, int arr[], int n){
    if(index == n){
        if(s == sum){
            for(auto it: ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[index]);
    s+=arr[index];
    prints(index+1, ds, s, sum, arr, n);
    s-=arr[index];
    ds.pop_back();
    prints(index+1, ds, s, sum, arr, n);

}

int main() {
    int arr[] = {1,2,1};
    int n = 3, sum=2;
    vector<int> ds;
    prints(0, ds, 0, sum, arr, n);
    return 0;

}