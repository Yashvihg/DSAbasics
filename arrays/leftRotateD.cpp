// This is similar to the left rotate, but by D spaces.
#include<iostream>
#include "bits/stdc++.h"

using namespace std;
void rev(int arr[], int low, int high){
while(low<high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void leftRotateD(int arr[], int n, int d){
rev(arr, 0, d-1);
rev(arr, d, n-1);
rev(arr, 0, n-1);
}


int main()
{
    int arr[10], n, d;  //n is no. of elts, d no of places to rotate. 
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter D space: ";
    cin>>d;
    cout<<"Enter array Elements: \n";
    for(int i = 0; i<n; i++)
        cin>>arr[i];
    leftRotateD(arr,n,d);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}