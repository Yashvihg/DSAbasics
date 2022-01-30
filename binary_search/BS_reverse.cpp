#include<iostream>
#include "bits/stdc++.h"
using namespace std;

int binarySearchRev(int a[], int n, int key){
    int s=0, e=n-1; // intializing start and end
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid] == key)
            return mid; //mid+1
        else if(a[mid]>key)
            s=mid+1;
        else if(a[mid]<key)
            e=mid-1;
    }
    return -1;

}

int main(){
    int n, key, a[100];
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"\n Enter key to search respectively: ";
    cin>>key;
    cout<<binarySearchRev(a, n, key)<<endl;

}