class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n=matrix.size(),m=matrix[0].size();
        int row=0,col=0,b_c=m-1,b_r=n-1;
        vector<int>ans;
        while(row<=b_r && col<=b_c){
            for(int k=col;k<=b_c;++k)ans.push_back(matrix[row][k]);
            if(row+1>b_r) break;
            for(int k=row+1;k<=b_r;++k)ans.push_back(matrix[k][b_c]);
            
            if(b_c-1<col) break;
            for(int k=b_c-1;k>=col;--k)ans.push_back(matrix[b_r][k]);
            
            if(b_r-1<row) break; 
            for(int k=b_r-1;k>row;--k)ans.push_back(matrix[k][col]);
            
            row++,col++,b_r--,b_c--;

        }
        // ans.push_back(matrix[row][col])
        
        return ans;
    }
};