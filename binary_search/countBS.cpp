// to find the count of an element in a sorted array --> 

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
    int count=0;

    if(fs && ls != -1){
        // cout<<"First Occcurence is: " << fs <<"\nLast Occurence is: " << ls; 
        count = ls - fs + 1;
        cout<<"The Count of the Element is: "<<count;
    } else{
        cout<<"Element Not found ---- "<<"Count is: "<<count;
    }

}


/*

// using lower_bound() and upper_bound() function. 
# include <bits/stdc++.h>
using namespace std;


int count(int arr[], int x, int n)
{    
  int *low = lower_bound(arr, arr+n, x);
  if (low == (arr + n) || *low != x)
     return 0;
     
  int *high = upper_bound(low, arr+n, x);     

  return high - low;
}

int main()
{
  int arr[] = {1, 2, 2, 3, 3, 3, 3};
  int x =  3;  // Element to be counted in arr[]
  int n = sizeof(arr)/sizeof(arr[0]);
  int c = count(arr, x, n);
  printf(" %d occurs %d times ", x, c);
  return 0;
}

*/