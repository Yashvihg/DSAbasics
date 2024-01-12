//LEETCODE approach - 1

class Solution {
public:
    void allPermutations(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int freq[]){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i<nums.size(); i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                allPermutations(nums, ans, ds, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> ds;
        int freq[nums.size()];
        for(int i = 0; i<nums.size(); i++) freq[i] =0;
        allPermutations(nums, ans, ds, freq);
        return ans;
    }
};


//LEETCODE approach - 2

class Solution {
public:
    void allPermutations(int index, vector<int> &nums, vector<vector<int>> &ans){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            allPermutations(index+1, nums, ans);
            swap(nums[index], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans; 
        int freq[nums.size()];
        allPermutations(0, nums, ans);
        return ans;
    }
};