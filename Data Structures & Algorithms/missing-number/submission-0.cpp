class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i: nums) sum += i;
        int exp_sum = (nums.size() * (nums.size()+1)) / 2;

        return exp_sum - sum;
    }
};