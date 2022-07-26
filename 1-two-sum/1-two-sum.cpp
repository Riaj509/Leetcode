class Solution {
public:
    vector<int> v;
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for (int i=0; i<nums.size();i++){
        
            int a = target - nums[i];
                    
            vector<int>::iterator itr = find(nums.begin()+i+1, nums.end(), a);
        
            if (itr != nums.end()){
            
                int index = distance(nums.begin(), itr);
                v.push_back(i);
                v.push_back(index);
                break;
            }
            
        }
        return v;
    }
    
};