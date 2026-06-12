class Solution {
public:
    bool search(vector<int>& nums, int target) {
        set <int> myset = {};
        for(int i = 0; i < nums.size(); i++){
            myset.insert(nums[i]);
        }
        vector <int> mylist(myset.begin(), myset.end());
        
        int l = 0, r = mylist.size() - 1;

        while(l <= r){
            int mid = l+ (r - l)/2;

            if(mylist[mid] == target){
                return true;
            }

            else if(mylist[l] <= mylist[mid]){
                if(mylist[l] <= target && target <= mylist[mid]){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            else{
                if(mylist[mid] <= target && target <= mylist[r]){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }
        return false;

    }
};