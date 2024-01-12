#include<bits/stdc++.h>
using namespace std;

void func(int index, int sum, vector<int> &arr, int n, vector<int> &sumSubset){
    if(index == n){
        sumSubset.push_back(sum);
        return;
    }
    //case where you pick the element and proceed with the element
    func(index+1, sum + arr[index], arr, n, sumSubset);
    
    //case where we dont pick -->
    func(index+1, sum, arr, n, sumSubset);

}

void main(){
    int arr[] = {1,2,1};
    vector<int> sumSubset;
    int n = arr.size();
    func(0, 0, arr, n, sumSubset);
    //sort(sumSubset.begin(), sumSubset.end());
    cout<<sumSubset;
    return 0;
}