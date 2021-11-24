#include<iostream>
#include "bits/stdc++.h"

using namespace std;
int secondlargest(int arr[], int n){
    int res=-1, largest=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[largest]){
        res=largest;
        largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res])
                res=i;
            }
        }
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
    int result = secondlargest(arr, n);
    cout<<"second largest no. is - "<<arr[result];
    
}


// inefficient method would be to use the largest element funtion and avoid that element and find the largest in the rest. 
