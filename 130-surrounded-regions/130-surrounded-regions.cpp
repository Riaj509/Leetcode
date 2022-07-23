
class Solution {
    vector<vector<int>> vis = vector<vector<int>>(210,vector<int>(210));
    int dx[4] = {0,0,1,-1}; 
    int dy[4] = {1,-1,0,0};
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size(),m = board[0].size();
      for(int i=0;i<m;i++){
          if(board[0][i]=='O')dfs(0,i,n,m,board);
      }
    for(int i=0;i<n;i++){
        if(board[i][0]=='O')dfs(i,0,n,m,board);
    }
        for(int i=0;i<m;i++){
            if(board[n-1][i]=='O')dfs(n-1,i,n,m,board);
        }
         for(int i=0;i<n;i++){
            if(board[i][m-1]=='O')dfs(i,m-1,n,m,board);
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)if(!vis[i][j] && board[i][j]=='O')board[i][j]='X';
        }
        
    }
    void dfs(int i,int j,int n,int m,vector<vector<char>>& board){
        vis[i][j] = 1;
        for(int x=0;x<4;x++){
            int row = dx[x]+i;
            int col = dy[x]+j;
            
            if(row>=0 && row<n && col>=0 && col<m && !vis[row][col] && board[row][col]=='O'){
                dfs(row,col,n,m,board);
            }
        }
    }
};