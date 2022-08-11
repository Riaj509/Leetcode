class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
	int n = points.size();
	vector<vector<int>> graph(n, vector<int>(n, 0));
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			graph[i][j] = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);

	vector<int> key(n, INT_MAX);
	vector<bool> mst(n, false);
	priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
	key[0] = 0;
	pq.push({0, 0});                //{value, key index}
	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		mst[u] = true;

		for(int j=0; j<n; j++){
			if(mst[j] == false && graph[u][j] < key[j]){
				key[j] = graph[u][j];
				pq.push({key[j], j});
			}
		}
	}
	int cost = 0;
	for(int i=1; i<n; i++){
		cost += key[i];
	}
	return cost;
}
};