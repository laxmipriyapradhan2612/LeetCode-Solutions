class Solution {
public:
    void getPerms(vector<int>& nums, int idx, vector<vector<int>> &ans){
        if(idx== nums.size()){
            ans.push_back({nums});
            return;
        }
        for(int i= idx; i< nums.size(); i++){
            swap(nums[idx], nums[i]); // idx place --> ith element choice 
            getPerms(nums, idx+1, ans);
            swap(nums[idx], nums[i]); // backtracking 
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPerms(nums, 0, ans);
        return ans;
    }
};