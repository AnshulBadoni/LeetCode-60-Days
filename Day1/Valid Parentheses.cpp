class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> bracketmap = {
            {')','('},
            {'}','{'},
            {']','['}
        };

        for(char c:s){
            if(c=='(' ||c=='{' ||c=='['){
            st.push(c);
            }
            else if(c==')' ||c=='}' ||c==']'){
                if(st.empty()||st.top()!=bracketmap[c]){
                    return false;
                }
                st.pop();
            }
        }
     return st.empty();
    }
};