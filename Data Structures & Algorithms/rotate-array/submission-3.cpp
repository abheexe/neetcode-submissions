class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = 0, r = nums.size()-1;
        while(l < r){
            swap(nums[l++], nums[r--]);
        }
        int z = k % nums.size();
        int i = 0, j = z-1;
        while(i < j){
            swap(nums[i++], nums[j--]);
        }
        int c = z, d = nums.size()-1;
        while(c < d){
            swap(nums[c++], nums[d--]);
        }
    }
};