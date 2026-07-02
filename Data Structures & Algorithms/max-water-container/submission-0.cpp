class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxCap = 0;
        int currCap = 0;
        int l = 0;
        int r = heights.size() - 1;

        while(l < r){
            currCap = (r - l) * min(heights[l], heights[r]);
            maxCap = max(maxCap, currCap);

            if(heights[l] < heights[r]){ l += 1; }
            else{ r -= 1; }
        }
        return maxCap;

    }
};
