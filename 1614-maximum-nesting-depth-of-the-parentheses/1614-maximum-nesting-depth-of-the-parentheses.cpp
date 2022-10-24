class Solution {
public:
    int maxDepth(string s) {
        
        int mx=0,st=0,cur_mx=0;
       for(int i=0;i<s.size();++i){
           if(s[i]=='(') {
               st++;
           }
           else if(s[i]==')'){
               st--;
           }
           mx=max(mx,st);
           
       } 
        return mx;
    }
};