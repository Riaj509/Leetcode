class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n=nums.size();
        vector<long long> ans(n);
        ans[0]=nums[0];
        for(long long i=1;i<n;i++) ans[i]=nums[i]+ans[i-1];
        
        long long int mn=1e10+123,idx=-1;
        
        for(long long i=0;i<n;i++ ){
           int avg=0,lft=0,ri=0;
            lft=ans[i]/(i+1);
            
            if(i!=n-1)ri=(ans[n-1]-ans[i])/(n-i-1);
                avg=abs(lft-ri);
            if(avg<mn) {
                mn=avg;
                idx=i;
            }
        }
        
        return idx;
    }
};