class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        map<int,int>f;
        set<int>trst;
        for(int i=0;i<trust.size();++i){
            f[trust[i][1]]++;
            trst.insert(trust[i][0]);
        }
       for(int i=1;i<=n;i++)if(f[i]==n-1 && trst.find(i)==trst.end()) return i;
        
        return -1;
    }
};