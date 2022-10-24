class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
	unordered_map<int, int>mp;
	int center, n = size(edges);
	for(auto& edge:edges)
		mp[edge[0]]++, mp[edge[1]]++;

	vector<int>arr(n);
	for(auto& pair:mp)           
		if(pair.second == n){
			center = pair.first;
			break;
		}                        
	return center;
}
};