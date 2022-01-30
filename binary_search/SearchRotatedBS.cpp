// to find an element in a Rotated array

#include "bits/stdc++.h"

using namespace std;

int searchRBS(int a[], int s, int e, int n){
    if(a[e]>=a[s]) {return 0;}
    
    while(s<=e){
        int mid=s+(e-s)/2;
        //to find the smallest value ->
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        // if(e==s || a[s] <=a[e])
        //     return s;
        if((a[mid] <= a[next]) && (a[mid] <= a[prev]))
            return mid; // The smallest values index will give no. of rotations     
        else 
        {
            if(a[mid]>=a[s] && a[mid]<=a[e]) { return s; }
            // if(s == e){ return s;}
            else if(a[s]<=a[mid])
                s=mid+1;
            else if(a[mid]<=a[e])
                e=mid-1;
        }
    }

    // return 0;
}

int searchElt(int a[], int s, int e, int key){
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid] == key)
            return mid; //mid+1
        else if(a[mid]>key)
            e=mid-1;
        else if(a[mid]<key)
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
    cout<<"Enter the Element you want to search: ";
    cin>>key;
    int s=0, e=n-1;
    int index = searchRBS(a, s, e, n);
    // cout<<"The index of smallest Element is --> "<< index; 
    if(key>a[e]){
        int firsthalf = searchElt(a, 0, index-1, key);
        // if(firsthalf != -1)
        cout<<"\nthe Element is at index: "<< firsthalf << " -- IT EXISTS";

    }
    else {
        int secondhalf = searchElt(a, index, e, key);
        cout<<"\nthe Element is at index: "<< secondhalf << " -- IT EXISTS";
        }

}


