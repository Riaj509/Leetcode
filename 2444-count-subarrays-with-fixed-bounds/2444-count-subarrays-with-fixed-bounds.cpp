class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int    mn=minK,mx=maxK,cur_mi=-1,cur_mx=-1,n=nums.size();
        
        long long  i=0,j=0,seg=0;
        
        while(j<n){
            if(nums[j]<mn || nums[j]>mx) {
                cur_mi=-1,cur_mx=-1;
                i=j+1;
            }
            
            if(nums[j]==mn) cur_mi=j;
            if(nums[j]==mx) cur_mx=j;
            
            seg+=max(0LL,min(cur_mi,cur_mx)-i+1);
            j++;
            
        }
        return seg;
        
    }
};