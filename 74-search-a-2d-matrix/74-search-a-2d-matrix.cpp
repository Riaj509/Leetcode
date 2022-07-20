class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lft=0,ri=matrix.size()*matrix[0].size()-1,sz=matrix[0].size();
        while(ri>=lft){
            int mid=(lft+ri)>>1;
            if(matrix[mid/sz][mid%sz]>=target && matrix[mid/sz][mid%sz]<=target)return true;
            if(matrix[mid/sz][mid%sz]>target)ri=mid-1;
            else lft=mid+1;
        }
        return false;
    }
};