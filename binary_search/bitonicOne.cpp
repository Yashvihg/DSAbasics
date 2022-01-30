// finding the max element in an Bitonic array using the concept of peak element. 
#include "bits/stdc++.h"
using namespace std;

int bitonicSearch(int a[], int n){
    int low=0, high=n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            return a[mid];
        else if(mid == 0 && a[mid]>a[mid+1])
            return a[0];
        else if(mid == n-1 && a[mid]>a[mid-1])
            return a[n-1];
        else if((mid==0 && a[mid]<a[mid+1]) || (a[mid]>a[mid-1] && a[mid]<a[mid+1]))
            low = mid+1;
        else if((mid == n-1 && a[mid]<a[mid-1]) || (a[mid]<a[mid-1] && a[mid]>a[mid+1]))
            high = mid-1;
    }
    return a[n-1];
}

int main(){
    int n, a[100];
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    // int peakIndex = peakSearch(a, n);
    cout<<"The Max element is --> "<<bitonicSearch(a, n)<<endl;
}
