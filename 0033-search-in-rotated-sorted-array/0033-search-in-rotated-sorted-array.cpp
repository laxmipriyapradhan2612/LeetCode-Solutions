class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0, end= nums.size()-1;
        while(st<= end){
            int mid= st + (end- st)/2;
            if(nums[mid]== target){
                return mid;
            }
            if(nums[st]<= nums[mid]){  //left side is sorted
                if(nums[st]<= target && target<= nums[mid]){  // target is in left side
                    end= mid-1;
                }else{       // target is in right side
                    st= mid+1;
                }
             
            }else{    // right side sorted
                if(nums[mid]<= target && target <= nums[end]){ // target is in right side
                    st= mid+ 1;
                }else{    //target is in left side
                    end= mid-1;
                }
            }
        }
        return -1;
    }
};