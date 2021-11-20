#include<iostream>
#include "bits/stdc++.h"

using namespace std;
int insert(int arr[], int n, int num, int capacity, int posn){
    if(n == capacity)
        return n;
    else{   
            int index = posn-1;
            for (int i= n-1; i>=index; i--)
                arr[i+1] = arr[i];
            arr[index] = num;
            return n+1;
     }
     
}


int main()
{
    int arr[10] = {0};
    int num, n, capacity, posn; //n - array size
    cout<<"enter Number of elements in array - ";
    cin>>n;
    capacity = 10;
    cout<<"enter array elements - ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter the number to be added and postion  - ";
    cin>>num>>posn;
    int result = insert(arr, n, num, capacity, posn);
    cout<<"New array is - ";
    for (int i = 0; i < result; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
