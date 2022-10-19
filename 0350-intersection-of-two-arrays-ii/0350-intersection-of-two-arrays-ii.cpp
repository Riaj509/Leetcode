class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>f;
       for(auto u : nums1)f[u]++;
        for(int i=0;i<nums2.size();i++){
            if(f[nums2[i]]>0) {
                f[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
    return ans;
    }
};