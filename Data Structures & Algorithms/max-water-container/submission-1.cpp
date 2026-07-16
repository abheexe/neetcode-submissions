class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size()-1;
        int maxcap = 0;
        while(l < r){
            int currcap = (r - l) * min(heights[l] , heights[r]);
            maxcap = max(maxcap, currcap);
            if(heights[l] >= heights[r]){
                r--;
            }else{
                l++;
            }
        }
        return maxcap;
    }
};
