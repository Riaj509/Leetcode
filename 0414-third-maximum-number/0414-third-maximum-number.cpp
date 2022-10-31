class Solution {
public:
    int thirdMax(vector<int>& nums) {
      
        
       long long  a=LONG_MIN,b=LONG_MIN,c=LONG_MIN;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==a || nums[i]==b || nums[i]==c)continue;
            
                if(nums[i]>a){
                    c=b;
                    b=a;
                    a=nums[i];      
                }
                else {
                    if(nums[i]>b){
                        c=b;
                        b=nums[i];
                    }
                    else if(nums[i]>c)c=nums[i];
                }
        }
        if(c==LONG_MIN) return a;
        return c;
    }
};