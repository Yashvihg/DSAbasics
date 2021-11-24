//to remove Duplicates from a sorted array -->
//i/p = 1,2,2,3,3,3
//o/p = 1,2,3
#include<iostream>
#include "bits/stdc++.h"

using namespace std;

int removeDups(int arr[], int n){
    int res=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] != arr[res-1])
        {
            arr[res] = arr[i];
            res++;     //remains unchanged if the consecutive numbers are same (duplicates)
        }
    } return res;
}

int main(){
    int arr[10], n;
    cout<<"Enter the no. of Elements : ";
    cin>>n;
    cout<<"Anter array elements : \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int result = removeDups(arr, n);
    for(int i =0; i<result; i++)
        cout<<arr[i]<<" ";
}
