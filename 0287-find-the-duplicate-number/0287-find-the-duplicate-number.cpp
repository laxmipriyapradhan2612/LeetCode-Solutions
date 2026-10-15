class Solution {
public:
    int findDuplicate(vector<int>& arr) {
    // using slow- fast pointer
    int slow= arr[0], fast= arr[0];
    do{
        slow= arr[slow];  // slow-->+1
        fast= arr[arr[fast]];  //fast--> +2
    }while(slow!= fast);

    slow= arr[0];
    while(slow!= fast){
        slow= arr[slow]; //+1
        fast= arr[fast]; //+1
    }
    return slow;
    }
};