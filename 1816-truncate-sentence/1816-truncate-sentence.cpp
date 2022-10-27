class Solution {
public:
    string truncateSentence(string s, int k) {
        
        int str=0;
        int cnt=0;
        string ans;
        for(int i=0;i<s.size();++i){
            
        if(s[i]==' '){
            if(str<k-1){
                ans+=s[i];
                if(cnt)str++;
            } 
            else break;
        }
        else {
            if(s[i]!=' '){
                ans+=s[i];
                cnt++;
            }
        }
            
        }
        
        return ans;
    }
    
};