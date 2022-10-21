class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        
        map<string,vector<string>>fr;
        
        for(int i=0;i<strs.size();++i) {
            string s=strs[i];
            sort(s.begin(),s.end());
            fr[s].push_back(strs[i]);
        }
                vector<vector<string>>ans;

        for(auto u : fr){
           ans.push_back(u.second);
        }
        
        return ans;
    }
};