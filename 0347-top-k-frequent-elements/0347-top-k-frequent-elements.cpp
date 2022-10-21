class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>fr;
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++){
            fr[nums[i]]++;
        }
         for(auto u: fr ){
            pq.push({u.second,u.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};