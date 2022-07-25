class Solution {
public:
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        
        queue<pair<int,int>>node;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)if(grid[i][j]==2)node.push({i,j});
        }
        int ans=0;
         node.push({-1,-1});
        while(!node.empty()){
            int a=node.front().first;
            int b=node.front().second;
            if(a==-1 && b==-1){
                if(node.size()==1)
                    break;
                else{
                    ans++;
                    node.pop();
                    node.push({-1,-1});
                } 
            }
            else {
                if(a+1<n && grid[a+1][b]==1){
                    grid[a+1][b]=2;
                    node.push({a+1,b});
                }
                if(b+1<m && grid[a][b+1]==1){
                    grid[a][b+1]=2;
                    node.push({a,b+1});
                }
                if(a-1>=0 && grid[a-1][b]==1){
                    grid[a-1][b]=2;
                    node.push({a-1,b});
                }
                if(b-1>=0 && grid[a][b-1]==1){
                    grid[a][b-1]=2;
                    node.push({a,b-1});
                }
                node.pop();  
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)return -1;
            }
        }
        return ans;
    }
    
};