// This is a binary search algorithm for order unknown - ascending or descending

#include<iostream>
#include"bits/stdc++.h"

using namespace std;

int agnosticBS(int a[], int s, int e, int key){
    while(s<=e){
        int mid = s + (e-s)/2;
        if(key==a[mid])
            return mid;
        else if(a[s]<a[e] && key<a[mid] || a[s]>a[e] && key>a[mid])
            e=mid-1;
        // else if(a[s]<a[e] && key>a[mid] || a[s]>a[e] && key<a[mid])
        else
            s=mid+1;

    }
    return -1;
}

int main(){
    int n, key, a[100];
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int s=0, e=n-1;
    cout<<"\n Enter key to search respectively: ";
    cin>>key;
    int val = agnosticBS(a, s, e, key);
    if(val != -1)
        cout<<"the value Exists at location - "<<val<<endl;
    else
        cout<<"Value doesnt Exist!";

}