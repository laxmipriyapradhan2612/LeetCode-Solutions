class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int st=0;
        for(int end=1; end< nums.size(); end++){
            if(nums[st]!= nums[end]){
                st++;
                nums[st]=nums[end];
            }
        }
        return st+1;
    }
};