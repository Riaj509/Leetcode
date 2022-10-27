class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;
        permu(ans,0,nums);
         return ans;
     }
    
    void permu(vector<vector<int>>&a,int str,vector<int>main){
        
        
        if(str>=main.size()){
            a.push_back(main);
            return;
        }
        for(int i=str;i<main.size();++i){
            if(i>str && main[i]==main[str]) continue;
            swap(main[i],main[str]);
            permu(a,str+1,main);
            // swap(main[i],main[str]);
        }
    }

};