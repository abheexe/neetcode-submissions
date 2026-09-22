class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                if(tokens[i] == "+"){ int ssum = st[st.size()-2] + st.back(); st.pop_back(); st.pop_back(); st.push_back(ssum); }
                if(tokens[i] == "-"){ int diff = st[st.size()-2] - st.back(); st.pop_back(); st.pop_back(); st.push_back(diff); }
                if(tokens[i] == "*"){ int mult = st[st.size()-2] * st.back(); st.pop_back(); st.pop_back(); st.push_back(mult); }
                if(tokens[i] == "/"){ int divi = st[st.size()-2] / st.back(); st.pop_back(); st.pop_back(); st.push_back(divi); }
            }
            else{ st.push_back(stoi(tokens[i])); }
        }
        return st.back();
    }
};
