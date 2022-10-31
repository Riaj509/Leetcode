class Solution {
public:
    bool isValid(const string& s) {
        if(s.empty()) return false;
        int hyphen=0;
        for(int i=0; i<s.size(); ++i) {
            if(isdigit(s[i])) return false;
            if((s[i]=='!' or s[i]=='.' or s[i]==',') and i!=s.size()-1) return false;
            else if(s[i]=='-') {
                if(hyphen++ or i==0 or i==s.size()-1 or !isalpha(s[i-1]) or !isalpha(s[i+1])) return false;
            }
        }
        return true;
    }
    
    int countValidWords(const string& sentence) {
        string s;
        int res=0;
        for(auto i:sentence) {
            if(i==' ') {
                if(isValid(s)) ++res;
                s.erase();
            }
            else s+=i;
        }
        return isValid(s)?++res:res;
    }
};