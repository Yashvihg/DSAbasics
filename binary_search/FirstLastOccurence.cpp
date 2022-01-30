// to the the first and the last occurence of a sorted array. 

#include<iostream>
#include "bits/stdc++.h"

using namespace std;

int first(int a[], int s, int e, int key){
    int res = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if (key == a[mid])
        {
            res=mid;
            e=mid-1; // first occurence will be on LHS of mid because its a sorted array
        }  
        else if(key<a[mid])
            e = mid-1;
        else s=mid+1;
    }
    return res;
}
int last(int a[], int s, int e, int key){
        int res = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if (key == a[mid])
        {
            res=mid;
            s=mid+1; // last occurence will be on RHS of mid because its a sorted array
        }  
        else if(key<a[mid])
            e = mid-1;
        else s=mid+1;
    }
    return res;
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
    int fs = first(a, s, e, key);
    int ls = last(a, s, e, key);

    if(fs && ls != -1){
        cout<<"First Occcurence is: " << fs <<"\nLast Occurence is: " << ls; 
    } else{
        cout<<"Element Not found";
    }
    

}