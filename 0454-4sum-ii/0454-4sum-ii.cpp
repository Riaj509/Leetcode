class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int,int>m;
        for(auto u : nums1){
            for(auto v : nums2){
                m[u+v]++;
            }
        }
        int ans=0;
         for(auto u : nums3){
            for(auto v : nums4){
                ans+= m[-(u+v)];
            }
        }
        
        return ans;
    }
};