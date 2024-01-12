// to get the maximum sum of subarrays within an array given the size of the subarray
// applied using sliding window

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cout<<"enter array size 'n' and sliding window size 'k' --> ";
    cin>>n>>k;
    int a[50];
    vector<int> v;
    cout<<"enter the values in array --> ";
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int i=0, j=0, sum=0;
        while(j<n){
            if(j-i+1 < k){
                sum+=a[j];
                j++;
            }
            else if(j-i+1 == k){
                sum+=a[j];
                v.push_back(sum);
                sum-=a[i];
                i++;
                j++;
            }
        }
        cout<<"Maximum sum is --> "<< *max_element(v.begin(), v.end()) <<endl;
        return 0;
}