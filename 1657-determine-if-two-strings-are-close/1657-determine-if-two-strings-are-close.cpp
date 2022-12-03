class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        
        vector<int> f(26,0),f1(26,0),f2(26,0),f3(26,0);
        
        for(auto u : word1) {
            f[u-'a']++;
            f1[u-'a']=1;
        }
         for(auto u : word2) {
            f2[u-'a']++;
            f3[u-'a']=1;
        }
        
        sort(f.begin(),f.end());
        sort(f2.begin(),f2.end());
        
        return (f==f2 && f1==f3);
        
    }
};