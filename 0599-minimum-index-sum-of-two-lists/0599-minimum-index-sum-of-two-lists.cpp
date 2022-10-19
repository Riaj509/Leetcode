class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int>f;
        for(int i=0;i<list1.size();i++)f[list1[i]]=i+1;
        int mn=2000; 
        for(int i=0;i<list2.size();i++){
            if(f[list2[i]]) mn=min(mn,f[list2[i]]+i+1);
        }
        vector<string>ans;
         for(int i=0;i<list2.size();i++){
            if(f[list2[i]]){
                if(f[list2[i]]+(i+1)==mn) ans.push_back(list2[i]);
            }
        }
        return ans;
        
        
    }
};