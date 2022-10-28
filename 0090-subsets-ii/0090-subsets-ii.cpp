class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>tmp;
        
        check(0,nums.size(),nums,ans,tmp);
        
        return ans;
    }
    
    void check(int str,int end,vector<int>&main,vector<vector<int>>&a,vector<int>&b){
        
        a.push_back(b);
        
        for(int i=str;i<end;++i){
            if(i>str && main[i]==main[i-1])continue;
            b.push_back(main[i]);
            check(i+1,end,main,a,b);
            
            b.pop_back();
        }
    }
};