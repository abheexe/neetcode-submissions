class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> cars(n);
        for(int i = 0; i < n; i++){
            cars[i] = {position[i], speed[i]};
        }

        sort(cars.begin(), cars.end());
        vector<double> st;
        for(int i = n - 1; i >= 0; i--){
            double p = cars[i].first;
            double s = cars[i].second;

            st.push_back((target-p)/s);

            if(st.size() >= 2 && st.back() <= st[st.size() - 2]){
                st.pop_back();
            }
        }
        return st.size();
    }
};
