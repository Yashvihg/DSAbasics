// see if the array is sorted or not. 

#include<bits/stdc++.h>
using namespace std;

bool ifSorted(int a[], int n){
    if(n==0 || n==1){return true;}
    if(a[0]<a[1] and ifSorted(a+1, n-1)) return true;
    return false;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);   
    if(ifSorted(arr, n))
        cout<<"sorted";
    else cout<<"not sorted";
}