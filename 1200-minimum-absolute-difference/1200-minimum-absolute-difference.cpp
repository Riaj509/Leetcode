class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        map<int,vector<vector<int>>>f;
        for(int i=1;i<arr.size();++i)f[arr[i]-arr[i-1]].push_back({arr[i-1],arr[i]});
        
        return f.begin()->second;
    }
};