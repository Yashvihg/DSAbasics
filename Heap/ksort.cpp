// To find the Kth largest element using concept of heaps and - priority queue. 
// the heap by default is min heap where in the lsmallest element is maintained on the top.
// https://www.geeksforgeeks.org/nearly-sorted-algorithm/#:~:text=Given%20an%20array%20of%20n,9%20in%20the%20given%20array.
 

#include<bits/stdc++.h>
using namespace std;

vector<int>klarge(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> p;
    vector<int> res;
    for(int i=0; i<n; i++){
        p.push(arr[i]);
        if(p.size()>k){
            int ele = p.top();
            res.push_back(ele);
            p.pop();
        }
    }
    while(p.size()>0){
        int ele = p.top();
        res.push_back(ele);
        p.pop();
    }
    return res;
    
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
    vector<int> res = klarge(arr, n, k);
    cout<<"the sorted array is --> ";
    for(int &it: res)
    cout<<it<<"  ";
    cout<<endl; 
    return 0;
}