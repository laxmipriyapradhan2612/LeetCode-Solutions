class Solution {
public:
    int binSearch(vector<int>& arr, int target, int st, int end){
        while(st<=end){
            int mid= st+ (end-st)/2;
            if(arr[mid]== target){
                return mid;
            }else if(target> arr[mid]){
                return binSearch( arr, target, mid+1,end);
            }else{  // target< arr[mid]
                return binSearch( arr, target, st,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int target) {
       return binSearch(arr, target, 0, arr.size()-1);
    }
};