// Maximum consecutive ones in a binary array

#include<iostream>
#include "bits/stdc++.h"

using namespace std;
int MaxConecutiveOnes(bool arr[], int n)
{
    int res=0, curr;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        curr=0;
        else
        {
            curr++;
            res=max(res, curr);
        }
    }
    return res;
}

int main(){
    int n;
    bool arr[10];
    cout<<"Enter the no. of Elements : ";
    cin>>n;
    cout<<"Anter array elements : \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
  int result = MaxConecutiveOnes(arr, n);
  cout<<"The max number of consecutive ones is: "<<result;

}