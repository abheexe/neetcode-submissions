class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        unordered_map<char, int> freq = {};
        int maxfreq = 0;
        int res = 0;

        while(r < s.length()){
            freq[s[r]]++;
            maxfreq = max(maxfreq, freq[s[r]]);

            if((r-l+1) - maxfreq <= k){
                res = max(res, r -l+1);
            }
            else{
                freq[s[l]]--;
                l++;
            }
            r++;
        }
        return res;
    }
};
