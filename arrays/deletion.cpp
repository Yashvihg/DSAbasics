#include<iostream>
#include "bits/stdc++.h"

using namespace std;
int deletion (int arr[], int n, int num){
    int i; 
    for(i=0; i<n; i++)
        if (arr[i] == num)
            break;
        if(i==n)
        return n; //last elt deletion
        for(int j=i; j<n-1; j++)
        arr[j] = arr[j+1];
        return(n-1);
        
}



int main()
{
    int arr[10] = {0};
    int num, n; //n - array size
    cout<<"enter Number of elements in array - ";
    cin>>n;
    cout<<"enter array elements - ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter the number to be deleted - ";
    cin>>num;
    int result = deletion(arr, n, num);
    cout<<"New array is - ";
    for (int i = 0; i < result; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
