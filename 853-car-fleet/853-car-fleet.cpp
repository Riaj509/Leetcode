class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<long long int ,long long int>> v;
        for(int i=0;i<n;i++)v.push_back({position[i],speed[i]});
        sort(v.begin(),v.end());
        int res=0;
        float cur=0.0;
        for(int i=n-1;i>=0;i--){
            float dis=target-v[i].first;
            float sp=dis/v[i].second;
            if(sp>cur){
                cur=sp;
                res++;
            }
            
        }
        return res;
    }
};