class Solution {
    vector<vector<int>> vis = vector<vector<int>>(210,vector<int>(210));
    int dx[4] = {0,0,1,-1}; 
    int dy[4] = {1,-1,0,0};
    int pasific = 0,atlantic = 0;
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>>v;
        int n = heights.size(),m = heights[0].size();
        
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[i].size();j++){
//                 mim(heights,vis);
                
                pasific = 0,atlantic = 0;
                dfs(i,j,n,m,heights);
                if(pasific==1 && atlantic == 1){
                    v.push_back({i,j});
                }
                
            }
        }
        return v;
    }
    
    void mim(vector<vector<int>>& heights,vector<vector<int>>& vis){
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[i].size();j++){
                vis[i][j] = 0;
            }
        }
    }
    
    void dfs(int i,int j,int n,int m, vector<vector<int>>& heights){
       
        if(i==0 || j==0){
            pasific = 1;
        }
        if(i==n-1 || j==m-1){
            atlantic = 1;
        } 
        vis[i][j] = 1;
        for(int x=0;x<4;x++){
            int row = dx[x]+i;
            int col = dy[x]+j;
            if(row>=0 && row< n && col>=0 && col<m && !vis[row][col] && heights[row][col]<=heights[i][j]){
                dfs(row,col,n,m,heights);
                if(pasific==1 && atlantic==1)break;
            }
        }
        vis[i][j]=0;
    }
};