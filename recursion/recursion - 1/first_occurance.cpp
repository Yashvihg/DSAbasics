// recursive function for finding the first occurance linearly. 

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int key){
    if(n==0){ return -1;}// base_case
    if(a[0] == key) return 0;
    int i = linearSearch(a+1, n-1, key);
    if(i == -1) return -1;
    else return i+1;

}

int main(){
    int a[20], n, key;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter array: ";
    for(int i=0; i<n; i++) 
        cin>>a[i];
    cout<<"Enter Key: ";
    cin>>key;
    cout<<linearSearch(a, n, key);
}