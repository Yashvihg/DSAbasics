// to count the rotations in a rotated array --> 

#include "bits/stdc++.h"

using namespace std;

int countRotations(int a[], int s, int e, int n){
    if(a[e]>=a[s]) {return 0;}
    
    while(s<=e){
        int mid=s+(e-s)/2;
        //to find the smallest value -> avoid going out of bounds do %N
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
    // return -1;
}

int main(){
    int n, a[100];
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int s=0, e=n-1;
    int rotations = countRotations(a, s, e, n);
    cout<<"The number of Rotations are --> "<< (n - rotations) % n; 
    // System.out.println("No of rotation is : "+(arr.length-returned value)%arr.length);  --> java(number of rotations)
}