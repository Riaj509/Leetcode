class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int l=matrix[0][0],r=matrix[n-1][n-1],ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            int cnt=0,trig=0,simi=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][j]<mid)cnt++;
                    if(matrix[i][j]==mid){
                        trig=1;
                        simi++;
                    }
                }
            }
         if(trig==0){
             if(cnt<k) l=mid+1;
             else r=mid-1;
         }
            else {
                if(cnt<k){
                    int diff=k-cnt;
                    if(diff>simi) l=mid+1;
                    else {
                        ans=mid;
                        break;
                    }
                }
               else r=mid-1;
            }
        }
       
        if(n==1) return matrix[0][0];
        return ans;
       
    }
};