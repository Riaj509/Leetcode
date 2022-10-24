class Solution {
public:
    int countAsterisks(string s) {
        
        int tot=0,bar=0;
        for(int i=0;i<s.size();++i){
         if(s[i]=='|')bar++;
        else if(s[i]=='*' && bar%2==0)tot++;
        }
        
        return tot;
    }
};