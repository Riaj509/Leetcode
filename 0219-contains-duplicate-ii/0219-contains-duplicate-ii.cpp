class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        set<long long int>st;
        for(long long int i=0;i<nums.size();i++){
            if(i>k)
                st.erase(nums[i-k-1]);
            if(st.count(nums[i])) return true;
            st.insert(nums[i]);
            
        }
        return false;
    }
};