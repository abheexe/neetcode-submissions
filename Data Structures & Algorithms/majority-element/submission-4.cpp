class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int currMaj = nums[0];
        int currCount = 0;
        int i = 0;
        while(i < nums.size()){
            if(currCount == 0){
                currMaj = nums[i];
            }
            if(nums[i] == currMaj){
                currCount++;
            }
            else{
                currCount--;
            }
            i++;
        }
        return currMaj;
    }
};

