class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n, 0);
        int prefix = 0;
        for(int i = 0; i < n; i++){
            pre[i] += prefix;
            prefix += nums[i];
        } 
        int suffix = 0;
        vector<int> suff(n, 0);
        for(int i = n - 1; i >= 0; i--){
            suff[i] += suffix;
            suffix += nums[i];
        }

        for(int i = 0; i < n; i++){
            if(pre[i] == suff[i]){ return i; }
        }
        return -1;
    }
};