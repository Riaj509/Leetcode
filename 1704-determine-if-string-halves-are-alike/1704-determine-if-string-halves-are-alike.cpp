class Solution {
public:
    bool halvesAreAlike(string s) {
        int ans=0;
        for(int i=0;i<s.size()/2;i++) if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='o' || s[i]=='O' || s[i]=='U' || s[i]=='u' || s[i]=='i' || s[i]=='I') ans++;
    
         for(int i=s.size()/2;i<s.size();i++) if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='o' || s[i]=='O' || s[i]=='U' || s[i]=='u' || s[i]=='i' || s[i]=='I') ans--;return ans==0;
    }

};