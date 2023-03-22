class Solution
{
public:
    vector<pair<int, int>> adj[100001];
    int minScore(int n, vector<vector<int>> &roads)
    {

        vector<int> vis(n + 1, 0);

        for (int i = 0; i < roads.size(); i++)
        {
            adj[roads[i][0]].emplace_back(roads[i][1], roads[i][2]);
            adj[roads[i][1]].emplace_back(roads[i][0], roads[i][2]);
        }
        int mn = 1e4 + 10;

        dfs(1, vis, mn);
        return mn;
    }

    void dfs(int nod, vector<int> &vis, int &mn)
    {
        vis[nod] = 1;

        for (auto [u, v] : adj[nod])
        {
            mn = min(mn, v);
            if (!vis[u])
            {
                dfs(u, vis, mn);
            }
        }
    }
};