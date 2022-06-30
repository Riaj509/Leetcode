class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int> _mx;
        vector<int>ans;
        int n=nums.size();
        for (int i = 0; i < k; i++)
        {
            _mx[nums[i]]++;
        }

       ans.push_back( _mx.rbegin()->first);
        for (int i = 0; i < n; i++)
        {
            if (i + k < n)
            {
                if(_mx[nums[i]]-1==0)_mx.erase(nums[i]);
                else _mx[nums[i]]--;
                _mx[nums[i + k]]++;
       ans.push_back( _mx.rbegin()->first);
            }
        }
        return ans;
    }
};