class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        int n=s.size();
        vector<string>cur;
        
        backtrack(ans,0,s,cur);
        
        return ans;
      
    }
    
    void backtrack(vector<vector<string>>&a,int str,string &s,vector<string>&cur){
        if(str>=s.size())a.push_back(cur);
        
        for(int end=str;end<s.size();++end){
            if(check(s,str,end)){
                cur.push_back(s.substr(str,end-str+1));
                backtrack(a,end+1,s,cur);
                cur.pop_back();
            }
        }
    }
    
    bool check(string s, int l,int r){
        while(l<r)if(s[l++]!=s[r--]) return false;
        return true;
    }
};
