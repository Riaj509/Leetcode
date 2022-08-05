
class Solution {
public:
   
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
         vector<int>ans;
         vector<int>adj[n];
        int degree[n];
        
          if(n == 1){
            return {0};
        }
        
        if(n == 2){
            return {0,1};
        }
        memset(degree,0,sizeof(degree));
        for(auto u : edges){
            adj[u[0]].push_back(u[1]);
            adj[u[1]].push_back(u[0]);
            degree[u[0]]++;
            degree[u[1]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++) if(adj[i].size()==1){ 
            q.push(i) ;
        }           
        
        while(!q.empty()){
           int sz=q.size();
            ans={};
            for(int i=0;i<sz;i++){ 
                int f=q.front();
                 q.pop();
                ans.push_back(f);
                for(auto u : adj[f]){
                    --degree[u];
                    if(degree[u]==1)q.push(u);
                }
            
        }
      }
        return ans;
    }
    
//     void bfs(vector<ll>adj[],ll degree[]){
//         queue<int> q;
//         for(auto u : leaf)q.push(u);
//         while(!q.empty()){
//            int sz=q.size();
//             ans.clear();
//             for(int i=0;i<sz;i++){ 
//                 int lf=q.front();
//                  q.pop();
//                 ans.push_back(lf);
//                 for(auto u : adj[lf]){
//                     --degree[u];
//                     if(degree[u]==1)q.push(u);
//                 }
            
//         }
//       }
        
//     }
    
    
};