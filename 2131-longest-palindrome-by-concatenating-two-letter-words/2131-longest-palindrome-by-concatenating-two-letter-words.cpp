class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        
        unordered_map<string,int>f;
        for(auto u : words)
            f[u]++;
            
        int ln=0,trig=0;
        for(auto u : f){
            string s=u.first;
            if(s[0]==s[1]){
                if(u.second%2==0) ln+=u.second;
                else {
                    if(trig==0){
                        
                      ln+=u.second;
                      trig=1;
                    }
                    else 
                         ln+=(u.second-1);
                     }
                     
            }
            else {
               reverse(s.begin(),s.end());
            if(f.count(s)){
                ln+=((min(u.second,f[s]))*2);
                f[s]=0;
            }
            }
            
        }
        
        return ln*2;
    }
};