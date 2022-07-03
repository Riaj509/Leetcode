class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>v=temperatures;
        vector<int>ans;
        int n=v.size();
        st.push(n-1);
        ans.push_back(0);
        for(int i=n-2;i>=0;i--){
            if(!st.empty()){
                while(!st.empty() && v[st.top()]<=v[i])st.pop();
                if(st.empty())ans.push_back(0);
                else ans.push_back(st.top()-i);
            }
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};