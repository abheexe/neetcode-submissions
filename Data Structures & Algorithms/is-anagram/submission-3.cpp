class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_set<int> t_set;
        if (s.length() != t.length()){
            return false;
        }

        unordered_map<char, int>s_map;
        for(int i = 0; i <s.length(); i++){
            s_map[s[i]] += 1;
        }

        for (char i: t){
            if (s_map.find(i) != s_map.end()){
                s_map[i] -= 1;
            }
            else{
                return false;
            }
        }

        for (auto& p: s_map){
            if (p.second != 0){
                return false;
            }
        }
        return true;
    }
};