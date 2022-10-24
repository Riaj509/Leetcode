class Solution {
public:
    int maxDepth(string s) {
        
        int mx=0,st=0,cur_mx=0;
       for(int i=0;i<s.size();++i){
           if(s[i]=='(') {
               st++;
               cur_mx=max(cur_mx,st);
           }
           else if(s[i]==')'){
               st--;
               if(st==0) {
                   mx=max(mx,cur_mx);
                   cur_mx=0;
               }
           }
           
       } 
        return mx;
    }
};