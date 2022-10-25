class Solution {
public: 
    vector<string> letterCombinations(string digits) {
       
        if(digits.empty()) return {};
        vector<string>ans;
        map<char,string>f;
        f['0']="";f['1']="";f['2']="abc";f['3']="def";f['4']="ghi";f['5']="jkl";f['6']="mno";f['7']="pqrs";f['8']="tuv";f['9']="wxyz";
        string buld;
        check(digits,0,buld,f,ans);
        
        return ans;
    }
    
    
    void check(string &main,int pos,string bld,map<char,string>&f,vector<string>&ans){
        if(pos==main.size()){
            ans.push_back(bld);
            return;
        }
        
        char c=main[pos];
        
        for(auto u : f[c]){
            check(main,pos+1,bld+u,f,ans);
        }
    }
};