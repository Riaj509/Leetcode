class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int> st;
        int a, b, ans = 0;
        
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] != "+" && tokens[i] != "-" &&tokens[i] != "*" && tokens[i] != "/")
               
                st.push(stoi(tokens[i]));
            else
            {
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    ans=a+b;
                    st.push(ans);
                }
               else if(tokens[i]=="-"){
                    ans=b-a; 
                    st.push(ans);
                }
                else if(tokens[i]=="*"){
                    ans=a*b;    
                    st.push(ans);
                }
                else{
                    ans=b/a;
                    st.push(ans);
                }
            }
        }
        return st.top();
    }
};