class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
         int n=34;
        vector<vector<int>>pas(n+1,vector<int>(2*n+1));
        vector<vector<int>>ans(n);
        
        for(int i=1,j=n;i<=n && j>=1;i++,--j){
            if(i==1){
                pas[i][j]=1;
                continue;
            }
            
            for(int k=j ,jmp=i;jmp>0;k+=2,--jmp){
                if(k==j) {
                    pas[i][k]=1;
                    continue;
                }
                 if(jmp==1){
                    pas[i][k]=1;
                  continue;

                }
                    pas[i][k]+=pas[i-1][k-1]+pas[i-1][k+1];
            }
            
        }
        for(int i=1,j=n;i<=n && j>=1;i++,--j){
            if(i==1){
               ans[i-1].push_back(pas[i][j]);
                continue;
            }
            
            for(int k=j, jmp=i;jmp>0;k+=2,--jmp){
               ans[i-1].push_back(pas[i][k]);
            }
            
        }
        return ans[rowIndex];
    }
};