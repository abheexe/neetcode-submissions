class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        int i = 0;
        stack<int> st;
        while(i < n){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }

            else{
                if(st.empty()){ return false; }

                else if(s[i] == ')' && st.top() != '('){ return false; }
                else if(s[i] == ']' && st.top() != '['){ return false; }
                else if(s[i] == '}' && st.top() != '{'){ return false; }

                else{
                    st.pop();
                }
            }
            i++;
        }
        return st.empty();
    }
};
