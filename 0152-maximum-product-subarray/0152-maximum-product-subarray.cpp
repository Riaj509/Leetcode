class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0],mn=nums[0],tot=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>0){
                mx=max(mx*nums[i],nums[i]);
                mn=min(mn*nums[i],nums[i]);
            }
            else{
                int tmp=mx;
                mx=max(mn*nums[i],nums[i]);
                mn=min(tmp*nums[i],nums[i]);
            }
            tot=max(mx,tot);
            
        }
        
        return tot;
    }
};