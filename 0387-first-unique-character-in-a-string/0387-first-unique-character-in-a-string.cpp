class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>fr;
      for(auto u : s)fr[u]++;
        for(int i=0;i<s.size();++i)if(fr[s[i]]==1) return i;
        return -1;
    }
};