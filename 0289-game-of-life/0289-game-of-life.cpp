class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int n=board.size(),m=board[0].size();
        vector<vector<int>>board1=board;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int o=0;
                if(i-1>=0 && board1[i-1][j]==1 )o++;
                if(i+1<n  && board1[i+1][j]==1)o++;
                if(j+1<m  && board1[i][j+1]==1)o++;
                if(j-1>=0 && board1[i][j-1]==1)o++;
                if(i+1<n  && j+1<m  && board1[i+1][j+1]==1)o++;
                if(i+1<n  && j-1>=0 && board1[i+1][j-1]==1)o++;
                if(i-1>=0 && j+1<m  && board1[i-1][j+1]==1)o++;
                if(i-1>=0 && j-1>=0 && board1[i-1][j-1]==1)o++;
                if(board1[i][j]==1){
                  if(o==2 || o==3) continue;
                  else board[i][j]=0;
                }
                else 
                    if(o==3)board[i][j]=1;
                
                
            }
        }
    }
};