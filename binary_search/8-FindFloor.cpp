// to find the floor of an element in a sorted array. 

#include "bits/stdc++.h"
using namespace std;

//this is to find the greatest element before the given element. 
int floorSearch(int a[], int n, int floor){
    int s=0, e=n-1, res= -1;
    if(floor>=a[e]){ return a[e];}
    while(s<=e){
        int mid = s + (e-s)/2;
        if(floor == a[mid]) return a[mid];
        else if (floor > a[mid]){
            res = a[mid];
            s = mid + 1;
        }
        else if(floor < a[mid]) {e=mid-1;}
    }
    return res;
}

int main(){
    int n, floor, a[100];
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"\nEnter FLOOR to search respectively: ";
    cin>>floor;
    cout<<"the floor of "<<floor<<" is --> "<< floorSearch(a, n, floor);
}