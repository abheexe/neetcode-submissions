class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int minSize = INT_MAX;
        for(int i= 0; i < strs.size(); i++){
            if (strs[i].size() < minSize){
                minSize = strs[i].size();
            }
        }
        int i = 0;
        while (i < minSize){
            
            for(auto& s: strs){
                if(strs[0][i] != s[i]){
                    return strs[0].substr(0,i); // substring of 1st element of strs from 0 to i
                }
            }
            i += 1;
        }
        return strs[0].substr(0,i);
    }
};