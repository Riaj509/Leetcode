class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>v(n);
        v[0].first=nums[0];
        v[n-1].second=nums[n-1];
        for(int i=1;i<n;i++) v[i].first=v[i-1].first*nums[i];
        for(int i=n-2;i>=0;i--) v[i].second=v[i+1].second*nums[i];
        
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(i==0) ans.push_back(v[i+1].second);
            else if(i==n-1)ans.push_back(v[i-1].first);
            else {
             ans.push_back(v[i-1].first*v[i+1].second);
            }
        }
        return ans;

        
    }
};