//left rotate an array by one 
//EXAMPLE - 
// input = {1,2,3,4,5}     output = {2,3,4,5,1}

#include<iostream>
#include "bits/stdc++.h"

using namespace std;
void leftRotate(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1; i<n; i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}

int main(){
    int arr[10], n;
    cout<<"Enter the no. of Elements : ";
    cin>>n;
    cout<<"Anter array elements : \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
  leftRotate(arr, n);
    for(int i =0; i<n; i++)
        cout<<arr[i]<<" ";
}