class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int>f;
        for(auto u : s) f[u]++;
        
        priority_queue<pair<int,char>>q;
        
        for(auto u : f) q.push({u.second,u.first});
        
        string ans;
        
        while(!q.empty()){
            char c=q.top().second;
            int d=q.top().first;
            q.pop();
            while(d--) ans+=c;
        }
        
        return ans;
    }
};