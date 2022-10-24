class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int lft=left,ri=right;
        set<int>st;
        for(auto u : ranges){
             for(int i=u[0];i<=u[1];++i){
            st.insert(i);
        }
        }
        
        for(int i=left;i<=right;++i) if(st.find(i)==st.end())return false;
       
        return true;
    }
};