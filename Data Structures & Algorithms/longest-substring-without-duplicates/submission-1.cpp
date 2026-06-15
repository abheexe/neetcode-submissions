class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars = {};
        int i = 0, j = 0;

        int currLen = 0;
        int maxLen = INT_MIN;

        while(i < s.length()){
            if(!chars.count(s[i])){
                currLen++;
                chars.insert(s[i]);
                i++;
                maxLen = max(maxLen, currLen);
            }
            else{
                chars.erase(s[j]);
                currLen--;
                j++;
            }
        }
        if(maxLen == INT_MIN){ return 0; }
        else{ return maxLen;}
    }
};
