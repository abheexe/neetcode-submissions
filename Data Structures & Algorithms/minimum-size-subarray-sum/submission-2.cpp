class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0;
        int minim = INT_MAX;
        int ssum = 0;

        while(r < nums.size()){
            ssum += nums[r];

            while(ssum >= target){
                minim = min(minim, r - l + 1);
                ssum -= nums[l];
                l++;
            }
            r++;
        }
        if(minim == INT_MAX){ return 0;}
        else{ return minim; } 

    }
};