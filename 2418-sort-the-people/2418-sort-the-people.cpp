class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0; i<heights.size(); i++){
            int index=i;
            for(int j=i+1; j< heights.size(); j++){
                if(heights[j]> heights[index]){
                    index=j;
                }

            }
            swap(heights[index], heights[i]);
            swap(names[index], names[i]);
        }
        return names;
    }
};