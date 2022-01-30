// this is a program for maximum sum in subarrays: 

#include<iostream>
#include "bits/stdc++.h"
using namespace std;

int maxSum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i=1; i<n; i++)
    {
        maxEnding = max(maxEnding+arr[i],arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main(){
    int arr[10], n;
    cout<<"Enter number of Elements in Array: ";
    cin>>n;
    cout<<"Enter the array Elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int result = maxSum(arr, n);
    cout<<"The sub array Sum is: "<<result;
    }