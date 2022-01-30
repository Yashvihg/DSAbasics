// to find the peak element in an array which is UNSORTED using Binary search algorithm that has been modified. 

#include "bits/stdc++.h"
using namespace std;

int peakSearch(int a[], int n){
    int low=0, high=n-1;
    while(low<=high){
        int mid = low + (high - low)/2;

        if(mid>0 && mid<n-1)
        {
            // if((mid == 0 || a[mid] > a[mid-1]) && (mid == n-1 || a[mid] > a[mid+1]))
            if((a[mid] > a[mid-1]) && (a[mid] > a[mid+1])) {return mid; }
        
            else if(a[mid-1]>a[mid]) 
                high = mid-1; 
            else if(a[mid+1]>a[mid]) 
                low = mid+1; 

        }
        else if(mid == 0 && a[0]>a[1]) 
                {return 0; }
        else if(mid == n-1 && a[n-1]>a[n-2]) 
                {return n-1; }
  
        // else if(mid == 0){
        //     if(a[0]>a[1]) return 0;
        //     else return 1;
        // }

        // else if(mid == n-1){
        //     if(a[n-1]>a[n-2]) return n-1;
        //     else return n-2;
        // }  

    }
    // return -1;
}

int main(){
    int n, a[100];
    cout<<"Enter number of Elements: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int peakIndex = peakSearch(a, n);
    cout<<"The Peak element is --> "<<a[peakIndex]<<endl;
}



/*

    int mid = low + (high - low) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && 
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;

    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return findPeakUtil(arr, low, (mid - 1), n);

    else
        return findPeakUtil(
            arr, (mid + 1), high, n);

*/

/*
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low =0, high=n-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(mid>0 && mid<n-1){
                if((nums[mid]>nums[mid-1]) && (nums[mid]>nums[mid+1])) return mid;
                else if(nums[mid-1]>nums[mid]) 
                    high = mid-1; 
                else if(nums[mid+1]>nums[mid]) 
                    low = mid+1; 
            }
            else if(mid == 0 && nums[0]>nums[1]){return 0;}
            else if(mid == n-1 && nums[n-1]>nums[n-2]){return n-1;}
        }
        return -1;
    }
};

*/



/*
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0, high=nums.size()-1;
        while(low<=high){
            int mid=low + (high-low)/2;
            
            if((mid==0|| nums[mid-1]<=nums[mid]) && (mid==nums.size()-1||nums[mid]>=nums[mid+1]))
                return mid;
            if(mid>0 && nums[mid-1]>=nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
        
    }
};

*/