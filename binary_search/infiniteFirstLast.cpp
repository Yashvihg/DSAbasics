// to find the index of the first occurance if '1' in an infinite BINARY array -->

#include "bits/stdc++.h"
using namespace std;

int FirstBS(int a[], int s, int e, int key){
    int res = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(key == a[mid]){
            res = mid;
            e = mid - 1;   
        }
        else if(key < a[mid]) {e = mid - 1; }
        else {s = mid + 1; }
    }
    return res; 
}

int getArray(int a[], int key){
    int s=0, e=1;
    while(key>a[e]){
        s = e; 
        e = e*2;
    }

    FirstBS(a, s, e, key);
}

int main(){
    int n, key=1, a[100];
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int result = getArray(a, key);
    cout<<"First 1's location is: "<<result;
}