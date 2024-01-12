// next greatest element in a non circular array to the right
//https://www.geeksforgeeks.org/next-greater-element/


#include<bits/stdc++.h>
using namespace std;

void nge(int arr[], int n){
    stack<int> s;
    int res[20];
    for(int i=n-1; i>=0; i--){
        if(!s.empty()){  //--> reduces the iterations. 
            while(!s.empty() && s.top()<=arr[i]){
                s.pop();
            }
        }
        if(s.empty()) 
            res[i] = -1;
            else res[i] = s.top();
        s.push(arr[i]);
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" --> "<<res[i]<<endl;
}

int main(){
    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);  //arr.size();
    nge(arr, n);
    return 0;
}