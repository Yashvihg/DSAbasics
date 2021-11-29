// to tel the maximum difference (arr[j] - arr[i]) between the pairs of array elements where in j>i. 
#include<iostream>
#include "bits/stdc++.h"

using namespace std; 

int maxDiff(int arr[], int n)
{
    int res=arr[1]-arr[0], minval=arr[0];
    for(int i=1; i<n; i++)
    {
        res = max(res, arr[i]-minval);
        minval = min(minval, arr[i]);
    }
    return res;
}

int main(){
    int arr[10], n;
    cout<<"Enter the number of elements: ";
    cin>> n;
    cout<<"Enter array elements: \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int result = maxDiff(arr, n);
    cout<<"The Max difference is: "<<result;
}