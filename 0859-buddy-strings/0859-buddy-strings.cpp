class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if(s.size()!=goal.size()) return false;
        vector<int>ans;
        for(int i=0;i<s.size();++i) {
            if(s[i]!=goal[i]) ans.push_back(i);
        }
        if(ans.size()>2) return false;
        
        if(ans.size()==2 && s[ans[0]]==goal[ans[1]] && s[ans[1]]==goal[ans[0]]) return true;
        if(s==goal && set<char>(s.begin(),s.end()).size()<s.size()) return true;
        
        return false;
        
    }
};