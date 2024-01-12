#include<bits/stdc++.h>
using namespace std;
void printer(int index, vector<int> &ds, int arr[], int n){
    if(index == n){
        for(auto it: ds){
            cout<<it<<" ";
        } 
        if(ds.size() == 0)
            cout<<"{}";
        cout<<endl;
        return;
    }
    ds.push_back(arr[index]);
    printer(index+1, ds, arr, n);
    ds.pop_back();
    printer(index+1, ds, arr, n);
}

int main(){
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printer(0, ds, arr, n);
    cout<<endl;
    return 0;
}