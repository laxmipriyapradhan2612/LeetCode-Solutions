class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int idx= m+n-1, i=m-1, j= n-1;
        while(i>=0 && j>=0){
            if(A[i]>=B[j]){
                A[idx]= A[i];
                idx--;
                i--;
            }else{
                A[idx]= B[j];
                j--;
                idx--;
            }
        }
        while(j>=0){
            A[idx]= B[j];
            j--;
            idx--;
        }
        
    }
};