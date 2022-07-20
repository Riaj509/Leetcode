class Solution {
public:
    int findMin(vector<int>& nums) {
         int lft=0,ri=nums.size()-1,sz=nums.size(),pivot=-1;
        while(ri>=lft){
            int mid=(lft+ri)>>1;
          if(nums[mid]>nums.back()){
              pivot=mid; 
              lft=mid+1;
          }   
          else ri=mid-1;
        }
        if(pivot==-1)return nums[0];
        return nums[pivot+1];
    }
    
};