class Solution {
public:
    vector<int>adj[5010];
    int vis[5010];
    int recvis[5010];
    bool  ck=false;
    vector<int>ans;
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         for(int i=0;i<numCourses;i++){
            vis[i]=0;
            recvis[i]=0;
            adj[i].clear();
        }
        for(int i=0;i<prerequisites.size();i++){
            for(int j=0;j<prerequisites[i].size();j++){
                int a=prerequisites[i][1];
                adj[a].push_back(prerequisites[i][0]);
            }
        }
        for(int i=0;i<numCourses;i++){
            if(!vis[i])dfs(i);
        }
        reverse(ans.begin(),ans.end());
        if(ck) return {};
        return ans;
    }
    void dfs(int node){
    vis[node] = 1;
    recvis[node] = 1;

    for (auto u : adj[node])
    {
        if (!vis[u])
        {
            dfs(u);
        }
        else
        {
            if (recvis[u])
            {
                ck = true;
                break;
            }
        }
    }
        ans.push_back(node);
    recvis[node] = 0;
    }
};