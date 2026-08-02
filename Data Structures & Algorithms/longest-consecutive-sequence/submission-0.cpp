class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int maxlen = 0;
        for(const int& i : nums){
            if(set.find(i - 1) == set.end()){
                int length = 1;
                while(set.find(i + length) != set.end()){
                    length++;
                }
                maxlen = max(maxlen , length);
            }
        }
        return maxlen;
    }
};