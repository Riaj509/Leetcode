class Solution {
public:
    bool isPalindrome(string s) {
        string tmp;
        for(int i=0,j=s.size()-1;i<s.size();i++,j--){
            if(s[i]>='a' && s[i]<='z' ) tmp+=s[i];
            if(s[i]>='A' && s[i]<='Z') tmp+=s[i]+32;
            if(s[i]>='0' && s[i]<='9')tmp+=s[i];
            
        }
        for(int i=0;i<tmp.size()/2;i++){
            if(tmp[i]!=tmp[tmp.size()-i-1]) return false;
        }
        return true;
    }
};