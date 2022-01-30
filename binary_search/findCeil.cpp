// To find the ceiling of a number in a sorted array

#include "bits/stdc++.h"
using namespace std;

int ceilSearch( int a[], int n, int ceil){
    int s=0, e=n-1, res=-1; 
    // if(ceil>a[e]){return cout<<"Ceil doesnt Exist";}
    while(s<=e){
        int mid = s + (e-s)/2;
        if(ceil == a[mid]){ return a[mid];}
        // else if(ceil>a[mid]){ s = mid + 1; cout<<"start "<<s<<" ";}
        else if(ceil>a[mid]){ s = mid + 1;}
        else if(ceil<a[mid]){ 
            res = a[mid];
            e = mid - 1;
            // cout<<"res "<<res<<" end "<<e<<" ";
        }
    }
    return res;
}

int main(){
    int n, ceil, a[100];
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"\nEnter CEILING to search respectively: ";
    cin>>ceil;
    cout<<"the floor of "<<ceil<<" is --> "<< ceilSearch(a, n, ceil);
}