// Shift all the Zeroes in the array to the end of the array. 
#include<iostream>
#include "bits/stdc++.h"

using namespace std;

void shiftZero(int arr[], int n){
    int val = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0){
            swap(arr[i], arr[val]); // (or) use normal swap way
            val++;
        }
    }
}

int main(){
    int arr[10], n;
    cout<<"Enter the no. of Elements : ";
    cin>>n;
    cout<<"Anter array elements : \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
  shiftZero(arr, n);
    for(int i =0; i<n; i++)
        cout<<arr[i]<<" ";
}