#include<iostream>
#include "bits/stdc++.h"

using namespace std;
int largest(int arr[], int n){
    int i, res=0; 
    for(i=0; i<n; i++)
        if(arr[i] > arr[res])
            res = i;
    return res;
}



int main()
{
    int arr[10] = {0};
    int n; //n - array size
    cout<<"enter Number of elements in array - ";
    cin>>n;
    cout<<"enter array elements - ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int result = largest(arr, n);
    cout<<"largest no. is - "<<arr[result];
    
}
