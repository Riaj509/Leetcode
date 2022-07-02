class Solution {
public:
    vector<string> generateParenthesis(int n) {
         vector<string> ans;
        generate("",0,0,n,ans);
        return ans;
    }
         void  generate(string cur,int kola,int bondo,int n,vector<string>&ans){
           
            if(kola==n && bondo==n) return ans.push_back(cur);
            
            if(kola<n)generate(cur+'(',kola+1,bondo,n,ans);
            if(bondo<kola)generate(cur+')',kola,bondo+1,n,ans);
        }
    
};