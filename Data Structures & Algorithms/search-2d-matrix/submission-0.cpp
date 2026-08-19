class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size()-1;
        while(l <= r){
            int mid = l + (r - l)/2;
            int n = matrix[mid].size();
            if(matrix[mid][0] <= target && matrix[mid][n-1] >= target){
                int ll = 0, rr = n - 1;
                while(ll <= rr){
                    int mmid = ll + (rr - ll)/2;

                    if(matrix[mid][mmid] == target){
                        return true;
                    }
                    else if(matrix[mid][mmid] > target){
                        rr = mmid - 1;
                    }else{
                        ll = mmid + 1;
                    }
                }
                return false;
            }
            else if(matrix[mid][0] > target){
                r = mid - 1;
            }
            else if(matrix[mid][0] < target){
                l = mid + 1;
            }
        }
        return false;
    }
};
