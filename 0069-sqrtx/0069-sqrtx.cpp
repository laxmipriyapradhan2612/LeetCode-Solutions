class Solution {
public:
    int mySqrt( long long int x) {
        long long int st=0, end =x, ans=0;
        while(st<=end){
            long long int mid= st + (end-st)/2;
            if(mid* mid == x){
                ans = mid;
                return ans;
            } else if( mid* mid > x){
                end=  mid-1;
            }else{
                st= mid+1;
            }
        }
        if(ans==0){
            ans= st-1;
        }
        return ans;
    }
};