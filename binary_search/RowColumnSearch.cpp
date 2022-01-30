// Program to perform search operations on 2d arrays in O(2n) complexity.

#include "bits/stdc++.h"
using namespace std;

pair<int, int> rowColSearch(int a[10][10], int key, int n){
    int i=0, j=n-1;
    pair<int, int> c;
    c.first=-1;
    c.second=-1;
    while(i>=0 && i<n && j>=0 && j<n){
        if(a[i][j] == key) 
        {
            return make_pair(i, j);
        }
        else if(a[i][j]>key) 
            j--;
        else if(a[i][j]<key) 
            i++;
    }
    return make_pair(c.first, c.second);
}

int main(){
    int n, a[10][10], key;
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    cout<<"enter the value to be searched --> ";
    cin>>key;
    pair<int, int> p = rowColSearch(a, key, n);
    cout<<"the COORDINATES are: "<< p.first<<" and "<<p.second;

}

