// To print the leaders in an array:
// i/p -- {8, 10, 3, 10, 9, 4, 1}  -- output -> 1, 4, 9, 10. 

#include<iostream>
#include "bits/stdc++.h"

using namespace std;

void arrLeader(int arr[], int n)
{
    int new_lead = arr[n-1];  //last elements are always leaders. 
    cout<<"output: "<<new_lead<<" ";
    for(int i = n-2; i>=0; i--)
    {
        if(new_lead < arr[i])
        {
            new_lead = arr[i];
            cout<<new_lead<<" ";
        }
    }
}

int main(){
    int n, arr[10];
    cout<<"Enter the number of Elements in array: ";
    cin>>n;
    cout<<"Enter the array Elements: \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    arrLeader(arr, n); 
}



// to display in the correct orde, the space complexity increases. 
/*
#include<iostream>
#include "bits/stdc++.h"

using namespace std;

void arrLeader(int arr[], int n)
{
    int temp[10], j=0;
    int new_lead = arr[n-1];  //last elements are always leaders. 
    temp[j] = new_lead;
    for(int i = n-2; i>=0; i--)
    {
        if(new_lead < arr[i])
        {
            new_lead = arr[i];
            temp[++j] = new_lead;
        }
    }
    for(int i = j; i>=0; i--)
        cout<<temp[i]<<" ";
}

int main(){
    int n, arr[10];
    cout<<"Enter the number of Elements in array: ";
    cin>>n;
    cout<<"Enter the array Elements: \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    arrLeader(arr, n); 
}

*/