class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=i+1;
        while(j<nums.size()){
            if(nums[i]==0){
                if(nums[j]!=0) {
                    swap(nums[i],nums[j]);
                    i++;
                }
            }
            else i++;
            j++;
        }
        
    }
};