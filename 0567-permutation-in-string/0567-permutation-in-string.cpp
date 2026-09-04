class Solution {
public:
bool isFreqSame(int freq[], int windfreq[]){
    for(int i=0; i<26; i++){
        if(freq[i]!= windfreq[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        int n= s1.size();
        for(int i=0; i<n; i++){
            freq[s1[i]-'a']++;
        }
        int windsize= s1.length(); // size of each window
        for(int i=0; i<s2.length(); i++){
            int windIdx=0, idx=i;
            int windfreq[26]={0};
            while(windIdx< windsize && idx< s2.length()){
                windfreq[s2[idx]-'a']++;
                idx++; windIdx++;
            }
            if(isFreqSame(freq, windfreq)){
            return true;
        }
        }
        return false;
        }

};