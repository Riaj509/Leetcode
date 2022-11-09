class Solution {
public:
    string makeGood(string s) {
        
        if(s.size()==1)return s;
        
        stack<char>st;
        string ans;
        for(int i=0;i<s.size();i++){
            if(st.empty())st.push(s[i]);
            else {
                char a=st.top();
                char b=s[i];
                if(abs(a-b)==32)st.pop();
                else st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};