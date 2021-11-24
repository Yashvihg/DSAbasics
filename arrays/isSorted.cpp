#include<iostream>
#include"bits/stdc++.h"

using namespace std; 
 
 bool isSorted(int arr[], int n)
 {
     for(int i=1 ;i<n; i++)
        if(arr[i]<arr[i-1])
         return false;
        return true; 
 }

 int main()
 {
     int arr[10], n;
     cout<<"Enter the no. of elements in the array: ";
     cin>>n;
     cout<<"Enter array elements: \n";
     for(int i=0; i<n; i++)
        cin>>arr[i];
        bool result = isSorted(arr, n);
        if(result == true)
            cout<<"Its sorted";
        else 
            cout<<"NOT sorted!";
 }