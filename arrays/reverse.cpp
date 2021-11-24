#include<iostream>
#include "bits/stdc++.h"

using namespace std;

int reverse(int arr[], int n)
{
    int low=0, high=n-1;
    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++; 
        high--;
    }
}

int main(){
    int arr[10], n=5;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    cout<<"Enter the array Elements : \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    reverse(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";    
}
