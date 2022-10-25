class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        map<char,bool>f;

        int l=0,r=0,ln=0;
        while(l<=r &&r<s.size()){
            if(!f[s[r]]){
                f[s[r]]=true;
                ln=max(ln,r-l+1);
                // cout<<ln<<endl;
                r++;
            }
            else {
                if(s[l]!=s[r]){
                    f[s[l]]=false;
                }
                else {
                    f[s[l]]=false;
                }
                l++;
            } 
           
        }

        return ln;
    }
};