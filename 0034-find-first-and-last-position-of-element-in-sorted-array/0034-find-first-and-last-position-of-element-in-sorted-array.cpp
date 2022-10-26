class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int fs=-1,ls=-1;
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)>>1;
            if(nums[mid]==target){
                fs=mid;
                r=mid-1;
            }
            else if(nums[mid]<target)l=mid+1;
            else r=mid-1;
        }
        if(fs==-1) return {-1,-1};
        l=fs+1,r=nums.size()-1,ls=-1;
         while(l<=r){
            int mid=(l+r)>>1;
            if(nums[mid]==target){
                ls=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)l=mid+1;
            else r=mid-1;
        }
        if(ls==-1)ls=fs;
        vector<int>ans={fs,ls};
        return ans;
    
 
    }
    
    
};