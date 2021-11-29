// to print the frequencies in a sorted array
#include<iostream>
#include"bits/stdc++.h"

using namespace std;

void freq(int arr[], int n){
    int count=1, i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1])
        {
            count++;
            i++;
        }
        cout<<arr[i-1]<<"  "<<count<<endl;
        i++;
        count=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2])
        cout<<arr[n-1]<<"  "<<1;
}


int main(){
    int arr[10], n;
    cout<<"Enter the number of elements: ";
    cin>> n;
    cout<<"Enter array elements: \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\n";
    freq(arr, n);
}