class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lft=0,ri=nums.size()-1,sz=nums.size(),pivot=-1;
        while(ri>=lft){
            int mid=(lft+ri)>>1;
          if(nums[mid]>nums.back()){
              pivot=mid; lft=mid+1;
          }
             
          else ri=mid-1;
        
        }
        
       
        int fn,tn;
        fn=binary_search(target,nums,pivot+1,sz-1);
        tn=binary_search(target,nums,0,pivot);
        if(fn>-1)
        return fn;
        else if(tn>-1)return tn;
        else return -1;
            
       
    } 
    int binary_search(int val,vector<int>&ans,int low,int high){
        int l=low,r=high;
        while(r>=l){
            int mid=(l+r)>>1;
            if(ans[mid]==val)return mid;
            else {
                if(ans[mid]>val)r=mid-1;
                else l=mid+1;
            }
        }
        return -1;
    }
};