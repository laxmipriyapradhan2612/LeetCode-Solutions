class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater= 0; //ans
        int lp= 0, rp= height.size()-1; // left pointer and right pointer
        while(lp<rp){
            int width= rp-lp;
            int ht= min(height[rp], height[lp]);
            int Area= width*ht;
            maxWater= max(maxWater, Area);
            //Height comparison
            height[lp]<height[rp]? lp++ : rp--;

        }
        return maxWater;
    }

};