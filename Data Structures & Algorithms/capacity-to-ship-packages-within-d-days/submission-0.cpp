#include <numeric>
class Solution {
public:
    bool canShip(vector <int>& weights, int days, int capacity) {
        int currweight = 0;
        int curr_day = 1;

        for(int &i : weights){
            if(currweight + i <= capacity){
                currweight += i;
            }
            else{
                currweight = i;
                curr_day++;
            }
        }
        return curr_day <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxValue = INT_MIN;
        for(int &i: weights){
            if(i > maxValue){ maxValue = i; }
        }
        int l = maxValue;
        int r = accumulate(weights.begin(), weights.end(), 0);

        while(l < r){
            int capacity = l + (r - l)/2;

            if(canShip(weights, days, capacity)){
                r = capacity;
            }
            else{
                l = capacity + 1;
            }
        }
        return l;
    }
};