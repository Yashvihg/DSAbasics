// to find the minimum difference in an element -- > 
/* here, we have an element which has to e subtracted from all array elements and whatever difference (absolute value) we find, that has to be be returned as the max difference. */

#include "bits/stdc++.h"
using namespace std;

int BS(int a[], int s, int e, int ele){
    while(s<=e){
        int mid = s + (e-s)/2;
        if(ele > a[e]){return e;}
        if(ele == a[mid]){
            return mid;
        }

        else if(ele<a[mid])
            e = mid-1;
        else if(ele>a[mid])
            s = mid+1;
    }
    if(abs(a[s]-ele) < abs(a[e]-ele)) {return s;}
    else return e; 
    // if(abs(a[s]-ele) == abs(a[e]-ele))
}

int main(){
    int n, ele, a[50];
    cout<<"Enter Number of Elements: ";
    cin>>n;
    cout<<"Give array: ";
    for(int i=0; i<n; i++) 
        cin>>a[i];
    cout<<"enter the KEY: ";
    cin>>ele;
    int s=0, e=n-1;
    int result = BS(a, s, e, ele);
    int minDiff = abs(ele - a[result]);
    cout<<"The min difference is:  "<<minDiff<<"\nAnd the element is:  "<<a[result]<<"\nAt location:  "<<result;

}
