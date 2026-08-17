class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        if(strs.size() == 0)
            return res;
        for(const auto& s : strs){
            res.append(to_string(s.size()));
            res.push_back('#');
            res.append(s);
        }
        return res;
    }
// 5#Hello5#World
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i , j-i)); // this length is the size of the single string eg: 12,3,4
            i = j + 1;
            j = i + length;
            res.push_back(s.substr(i, length));
            i = j;
        }
        return res;
    }
};
