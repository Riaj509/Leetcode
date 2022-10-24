class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
       
        int count = 0;
        
        for(int i = 0 ; i<nums.size()-2 ; i++)
        {
           int j = i+1 ;
            while(j<nums.size()-1 && nums[j]-nums[i] < diff)
                j++;           
            
            if( j== nums.size()-1 || nums[j]-nums[i] != diff)
                continue;
            
            int k = j+1;
            
            while(k<nums.size() && nums[k]-nums[j] < diff)
                k++;
            
            if(k < nums.size() && nums[k] - nums[j] == diff)
                count++;
        }
        
        return count;
    }
};