// to search for an element in a nearly sorted array --> 

#include "bits/stdc++.h"
using namespace std;

int BSnearlySorted(int a[], int n, int key){
    int s=0, e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(key == a[mid]) return mid;
        if(mid>=s && a[mid-1] == key) return mid-1;
        if(mid<=e && a[mid+1] == key) return mid+1;

        else if(key <= a[mid])
            e = mid - 2;
        else if(key >= a[mid])
            s = mid + 2;
    }
    return -1;  // element not found    

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
    cout<<"the element is at index --> "<< BSnearlySorted(a, n, key);
}


/*


// C++ program to find an element
// in an almost sorted array
#include <stdio.h>
 
// A recursive binary search based function.
// It returns index of x in given array
// arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l)
{
        int mid = l + (r - l) / 2;
 
        // If the element is present at
        // one of the middle 3 positions
        if (arr[mid] == x)
            return mid;
        if (mid > l && arr[mid - 1] == x)
            return (mid - 1);
        if (mid < r && arr[mid + 1] == x)
            return (mid + 1);
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 2, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 2, r, x);
}
 
// We reach here when element is not present in array
return -1;
}
 
// Driver Code
int main(void)
{
int arr[] = {3, 2, 10, 4, 40};
int n = sizeof(arr) / sizeof(arr[0]);
int x = 4;
int result = binarySearch(arr, 0, n - 1, x);
(result == -1) ? printf("Element is not present in array")
               : printf("Element is present at index %d",
                         result);
return 0;
}

*/