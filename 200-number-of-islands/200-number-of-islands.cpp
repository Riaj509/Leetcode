class Solution {    
    
vector<vector<int>>vis=vector<vector<int>>(310,vector<int>(310));
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
public:        

    int numIslands(vector<vector<char>>& grid) {
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++)vis[i][j]=0;
        }
        
        int tot=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    tot++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
        return tot;
    }
    
    void dfs(int x,int y,int n,int m,vector<vector<char>>& grid){
        vis[x][y]=1;
        
        for(int i=0;i<4;i++){
            int row=dx[i]+x;
            int col=dy[i]+y;
            
            if(row>=0 && row<n && col>=0 && col<m && !vis[row][col] && grid[row][col]=='1')              dfs(row,col,n,m,grid);
        }
        
    }
};