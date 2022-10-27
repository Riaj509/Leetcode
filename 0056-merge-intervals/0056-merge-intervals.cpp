class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>>ans;
      int l=intervals[0][0],r=intervals[0][1];
        int i=1;
        while(i<n){
            vector<int>tmp;
            if(intervals[i][0]<=r){
                l=min(intervals[i][0],l);
                r=max(intervals[i][1],r);
            }
            else {
                tmp.push_back(l);
                tmp.push_back(r);
                ans.push_back(tmp);
                l=intervals[i][0];
                r=intervals[i][1];
            }
            ++i;
        }
        
        ans.push_back({l,r});
        return ans;
    }
};