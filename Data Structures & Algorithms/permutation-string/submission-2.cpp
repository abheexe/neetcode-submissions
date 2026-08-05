class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()){ return false; }

        unordered_map<char, int> s1map;
        for(int i = 0; i < s1.length(); i++){
            s1map[s1[i]] += 1;
        }
        int l = 0, r = s1.length()-1;
        unordered_map<char, int> s2map;
        for(int i = l; i <= r; i++){
            s2map[s2[i]] += 1;
        }

        while(r < s2.length()){
            if(s1map == s2map){
                return true;
            }
            s2map[s2[l]] -= 1;
            if(s2map[s2[l]] == 0){  s2map.erase(s2[l]);}
            l++;
            r++;
            s2map[s2[r]] += 1;
        }
        return false;
    }
};
