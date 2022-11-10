class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        map<int,vector<int>>f;
        for(int i=0;i<colors.size();++i)f[colors[i]].push_back(i);
        int mx=0;
        for(auto u : f){
            for(auto v : f){
            if(u.first==v.first)break;
                int a=abs(u.second[0]-v.second.back());
                int b=abs(u.second.back()-v.second[0]);
                a=max(a,b);
                mx=max(mx,a);
            }
        }
        return mx;
    }
};