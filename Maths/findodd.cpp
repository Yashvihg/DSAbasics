#include "Bits/stdc++.h"
using namespace std;
int findOdd(int arr[], int n)
{
    int res = 0;
    for(int i=0; i<n; i++)
        {
            res=res^arr[i];
            cout<<res<<"\t"; 
        }
    return res;
}
int main()
{
    int arr[10], n, result;
    cout<<"enter no of elts in array";
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\n\n";
    result = findOdd(arr, n);
    cout<<"\n\n\tFINAL --> "<<result;
    return 0;
}