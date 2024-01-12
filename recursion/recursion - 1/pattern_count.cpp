// counts the subsequences -->

#include<bits/stdc++.h>
using namespace std;

int prints(int index, int s, int sum, int arr[], int n){
    if(s>sum) return 0;
    if(index == n){
        if(s == sum) return 1;
        //if the condition is not satisfied
        else return 0;
    }
    //ds.push_back(arr[index]);
    s+=arr[index];
    
    int l = prints(index+1, s, sum, arr, n);
    s-=arr[index];
    // ds.pop_back();
    int r = prints(index+1, s, sum, arr, n);
    return l+r;

}

int main() {
    int arr[] = {1,2,1};
    int n = 3, sum=2;
    // vector<int> ds; -- we dont need to maintain the data structure
    cout<<prints(0, 0, sum, arr, n);
    return 0;

}