// To find the Kth smallest element using concept of heaps and - priority queue. 
//the heap by default is max heap where in the largest element is maintained on the top. 

#include<bits/stdc++.h>
using namespace std;
int Ksmall(int arr[], int n, int k){
    priority_queue<int> p;   //max-heap
    for(int i = 0; i<n; i++){
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
    int res = Ksmall(arr, n, k);
    cout<< "the " << k <<"th "<< "smallest element is --> "<<res<<endl;
    return 0;
}