
/*
    class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = int(nums.size())-1, mid; 
        while(start<=end){
            mid=start + end-start/2;
            if(nums[mid] == target)
                return mid; 
            if(nums[start]<=nums[mid]){
                if(target<=nums[mid] && target>=nums[start])
                    end = mid - 1;
                else start = mid + 1;
            }
            else //if(nums[mid]<=nums[end])
                if(target>=nums[mid] && target<=nums[end])
                    start = mid + 1;
                else end = mid - 1; 
            
        }
        return -1;
    }
};
    */


/*
int search(vector<int>& nums, int target) {
    int lo = 0, hi = int(nums.size()) - 1;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if ((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid]))
            lo = mid + 1;
        else
            hi = mid;
    }
    return lo == hi && nums[lo] == target ? lo : -1;
}
*/


            // if((nums[mid] <= nums[next]) && ((nums[mid] <= nums[prev])|| mid == s))
        //     if ((mid == s || nums[mid-1] > nums[mid]) && (nums[mid] <= nums[e]))
        //             return mid; 
        //     if(nums[s]<=nums[mid])
        //         s = mid + 1;
        //     else e = mid - 1;
        //     }
        // return 0;




        // 0ms code --> 

        /*
        class Solution {
public:
    int binarysearch(vector<int> &a,int l,int h,int target)
    {
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(a[mid]==target)
                return mid;
            else if(a[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) 
    {
        int l=0,h=nums.size()-1;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]>=nums[0])
                l=mid+1;
            else
                h=mid;
        }
        if(target>=nums[l] && target<=nums[nums.size()-1])
            return binarysearch(nums,l,nums.size()-1,target);
        else
            return binarysearch(nums,0,l-1,target);
    }
};

*/