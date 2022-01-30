// to find the position of an element or the element itself in a sorted infinite array. 
// note: mid always lies between the start and end positions. 

#include "bits/stdc++.h"
using namespace std;

int BS(int a[], int s, int e, int key){
    // int s=0, e=n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(a[mid] == key) {return mid; }
        else if(key<a[mid]){ e=mid-1; }
        else if(key>a[mid]){ s=mid+1; }
    }
    return -1;
}

int getArray(int a[], int key){
    int s=0, e=1;
    while(key>a[e]){
        s = e; 
        e = e*2; //e=*2;
    }
    BS(a, s, e, key);
}

int main(){
    int n, key, a[100];
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"\n Enter key to search respectively: ";
    cin>>key;
    int result = getArray(a, key);
    cout<<"The arrays location is: "<<result;
}



/*

// RECURSIVE -->

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r>=l)
    {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}

int findPos(int arr[], int key)
{
    int l = 0, h = 1;
    int val = arr[0];
 
    // Find h to do binary search
    while (val < key)
    {
        l = h;        // store previous high
        h = 2*h;      // double high index
        val = arr[h]; // update new val
    }
    return binarySearch(arr, l, h, key);
}

int main()
{
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,
                               140, 160, 170};
    int ans = findPos(arr, 10);
    if (ans==-1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
    return 0;
}

*/