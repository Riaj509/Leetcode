class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        
        if(s1==s2) return true;
        vector<int>ans;
        for(int i=0;i<s1.size();++i){
            if(s1[i]!=s2[i])ans.push_back(i);
        }
        
        if(ans.size()>2) return false;
        
        if(ans.size()==2 && s1[ans[0]]==s2[ans[1]] && s1[ans[1]]==s2[ans[0]]) return true;
        return false;
    }
    
};