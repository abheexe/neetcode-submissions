class Solution {
public:
    string decodeString(string s) {
        vector<string> st;

        for(int i = 0; i < s.length(); i++){
            if(s[i] != ']')
                st.push_back(string(1, s[i]));
            else{
                string curr;
                while(st.back() != "["){
                    curr = st.back() + curr;
                    st.pop_back();
                }
                st.pop_back();

                string k;
                while(!st.empty() && isdigit(st.back()[0])){ // checking first char of st.back vuz its string and cant pass string to "isdigit" function (will result the same this is just formality)
                    k = st.back() + k;
                    st.pop_back();
                }
                int k_int = stoi(k);
                string temp;
                for(int i = 0; i < k_int; i++){
                    temp += curr;
                }
                st.push_back(temp);
            }
        }
        string result = "";
        while (!st.empty()) {
            result = st.back() + result;
            st.pop_back();
        }
        return result;
    }
};