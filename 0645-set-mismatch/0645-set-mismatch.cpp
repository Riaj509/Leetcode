class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        
        map<int,int>st;
        int paic=-1;
        for(auto u : nums){
            st[u]++;
            if(st[u]>1)paic=u;
        }
        
        int i=1;
        while(st.count(i))i++;
        return{paic,i};
        
        
        
        
    }
};