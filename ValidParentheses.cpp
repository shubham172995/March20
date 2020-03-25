class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2)
            return false;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if((s[i]==')'||s[i]==']'||s[i]=='}')&&st.size()==0)
                return false;
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                st.push(s[i]);
            else if(s[i]==')'){
                if(st.top()=='(')
                    st.pop();
                else break;
            }
            else if(s[i]=='}'){
                if(st.top()=='{')
                    st.pop();
                else break;
            }
            else if(s[i]==']'){
                if(st.top()=='[')
                    st.pop();
                else break;
            }
        }
        return st.size()==0;
    }
};