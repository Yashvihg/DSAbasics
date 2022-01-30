// To search an element in a bitonic array. 

#include "bits/stdc++.h"
using namespace std;

int bitonicSearch(int a[], int n){
    int low=0, high=n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            return mid;
        else if(mid == 0 && a[mid]>a[mid+1])
            return a[0];
        else if(mid == n-1 && a[mid]>a[mid-1])
            return n-1;
        else if((mid==0 && a[mid]<a[mid+1]) || (a[mid]>a[mid-1] && a[mid]<a[mid+1]))
            low = mid+1;
        else if((mid == n-1 && a[mid]<a[mid-1]) || (a[mid]<a[mid-1] && a[mid]>a[mid+1]))
            high = mid-1;
    }
    return n-1;
}

int ascendingBS(int a[], int s, int e, int key){
    while(s<=e){
        int mid = s + (e-s)/2;
        if(a[mid] == key) return mid;
        else if(key>a[mid]) s = mid+1;
        else if(key<a[mid]) e=mid-1;
    }
    return -1;
}

int descendingBS(int a[], int s, int e, int key){
    while(s<=e){
        int mid = s + (e-s)/2;
        if(a[mid] == key) return mid;
        else if(key>a[mid]) e=mid-1;
        else if(key<a[mid]) s=mid+1;
    }
    return -1;
}

int BS(int a[], int n, int key, int index){
    if(key > a[index]) return -1;
    else if(key == a[index]) return index;
    else {
        int ascSort = ascendingBS(a, 0, index-1, key);
        if(ascSort != -1) return ascSort;
        return descendingBS(a, index, n-1, key);
    }
}

int main(){
    int n, a[100], key;
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"enter the value to be searched --> ";
    cin>>key;

    int index = bitonicSearch(a, n);
    
    int searchedValue = BS(a, n, key, index);
    cout<<"the value is at index --> "<< searchedValue; 
    // cout<<"The Max element is --> "<<bitonicSearch(a, n)<<endl;
}
