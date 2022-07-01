class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1)return false;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else {
                if(s[i]==')'){
                    if(st.size()==0||st.top()!='(')return false;
                    else st.pop();
                }
                else if(s[i]=='}'){
                    if(st.size()==0||st.top()!='{')return false;
                    else st.pop();
                }
                else if(s[i]==']'){
                    if(st.size()==0||st.top()!='[')return false;
                    else st.pop();
                }
            }
        }
        if(st.size()!=0)return false;
        return true;
    }
};