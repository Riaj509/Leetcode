class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      unordered_set<int>s;
        for(auto u : nums){
            if(s.count(u)) return u;
            s.insert(u);
        }
        return -1;
    }
};