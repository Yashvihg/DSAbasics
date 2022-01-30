//Allocation of minimum number of pages -->

#include<bits/stdc++.h>
using namespace std;

bool isValid(int a[], int n, int k, int mid){
    int student=1;
    int SUM=0;
    for(int i=0; i<n; i++){
        SUM=SUM+a[i];
        if(SUM>mid){
            student++;
            SUM=a[i];
        }
        if(student>k)
            return false;
    }
    return true;
}

int allocatePages(int a[], int n, int k){
    long sum=0;
    if(n<k) return -1;
    for(int i=0; i<n; i++)
        sum+=a[i];
    int start=0, end=sum, result=-1;   // start can be max value in array. 
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isValid(a, n, k, mid) == true){
            result=mid;
            end = mid - 1;
        }
        else 
            start=mid+1;
    }
    return result;

}

int main(){
    int n, k, a[20];
    cout<<"enter N: ";
    cin>>n;
    cout<<"Enter values: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the no of Students (Key):  ";
    cin>>k;
    int pages = allocatePages(a, n, k);
    cout<<"PAGES:  "<<pages;

}