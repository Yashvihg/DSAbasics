//linear search in an array

#include <iostream>
#include "bits/stdc++.h"
using namespace std;
 int search (int arr[], int n, int num)
 {
     for (int i = 0; i < n; i++){
         if(arr[i] == num)
             return i;
     }return -1;
 }

int main()
{
    int arr[10], num, n; //n - array size
    cout<<"enter Number of elements in array - ";
    cin>>n;
    cout<<"enter array elements - ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"enter the search element - ";
    cin>>num;
    int result = search(arr, n, num);
    if(result == -1)
        cout<<"element doesn't exist";
    else
        cout<<"exists at location - "<<result+1;
}


//not user defined - 
/*
    int arr[] = {8,12,24,11,10};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
 */