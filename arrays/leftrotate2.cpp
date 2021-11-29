// this is left rotating an array by D using STL - vectors. 

#include<iostream>
#include "bits/stdc++.h"

using namespace std;

void rotateleft(vector<int>& v, int d){
    if(d==0)
        return;
    for(int i = 0; i<d; i++)
    {
        v.push_back(v[0]); // element at 0 put to the end of vector. 
        v.erase(v.begin()); //delete element 1
    }
}


int main(){
    int n, d, ele;
    vector<int> v;
    cout<<"enter number of elements you want to enter: ";
    cin>>n;
    cout<<"Enter Space: ";
    cin>>d;
    cout<<"Enter the elements: \n";
    
    for(int i = 0; i<n; i++)
    {
        std::cin >> ele;
        v.push_back(ele);
    }
        
    rotateleft(v, d);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

}