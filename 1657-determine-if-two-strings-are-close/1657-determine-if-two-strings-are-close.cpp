class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        
        vector<int> f(26,0),f1(26,0);
        set<char>s,s1;
        
        for(auto u : word1) {
            f[u-'a']++;
          s.insert(u);
        }
         for(auto u : word2) {
            f1[u-'a']++;
            s1.insert(u);
        }
        
        sort(f.begin(),f.end());
        sort(f1.begin(),f1.end());
        
        return (f==f1 && s==s1);
        
    }
};