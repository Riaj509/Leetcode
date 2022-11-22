class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        
        int dirx[4]={0,0,1,-1};
        int diry[4]={1,-1,0,0};
        int n=maze.size(),m=maze[0].size();
        maze[entrance[0]][entrance[1]]='+';
        queue<array<int,3>>q;
        
    q.push({entrance[0],entrance[1],0});
        
        
        while(!q.empty()){
           auto[x,y,z]=q.front();
            q.pop();
            
            for(int i=0;i<4;i++){
                int nxtx=dirx[i]+x;
                int nxty=diry[i]+y;
                
                if(nxtx>=0 && nxtx<n && nxty>=0 && nxty<m && maze[nxtx][nxty]=='.'){
                     if(nxtx==0 || nxtx==n-1 || nxty==0 || nxty==m-1) return z+1;
                
                maze[nxtx][nxty]='+';
                q.push({nxtx,nxty,z+1});
                }
                   
            }
        }
        return -1;
        
        
    }
};