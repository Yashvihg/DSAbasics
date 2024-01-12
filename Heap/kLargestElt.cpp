// To find the Kth largest element using concept of heaps and - priority queue. 
// the heap by default is min heap where in the lsmallest element is maintained on the top. 
//https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

#include<bits/stdc++.h>
using namespace std;

int klarge(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> p;
    int res;
    for(int i=0; i<n; i++){
        p.push(arr[i]);
        if(p.size()>k) p.pop();
    }
    return p.top();
    
}

int main(){
    int n,k;
    cout<<"enter number of elements: ";
    cin>>n;
    cout<<"enter k: ";
    cin>>k;
    int arr[50];
    cout<<"enter elements in array: ";
    // vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res = klarge(arr, n, k);
    cout<< "the " << k <<"th "<< "largest element is --> "<<res<<endl;
    return 0;
}