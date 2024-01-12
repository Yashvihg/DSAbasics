// Recursive function to perform binary search

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int s, int e, int key){
        if(s<=e) {
        int mid = s+(e-s)/2;  // base-case
        if(a[mid] == key) return mid;
        if(a[mid]<key) return binarySearch(a, mid+1, e, key);  //s=mid+1
        else return binarySearch(a, s, mid-1, key);  //e=mid-1;
        }
    return -1; // Value not found. 
}

int main(){
    int a[20], n, key;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter array: ";
    for(int i=0; i<n; i++) 
        cin>>a[i];
    cout<<"Enter Key: ";
    cin>>key;
    if(binarySearch(a, 0, n-1, key) != -1) cout<<"key is present!";
    else cout<<"not found";
}