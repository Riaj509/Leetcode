class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int cur_mx=-1;
        vector<int>ans;
        for(int i=arr.size()-1;i>=0;--i){
            ans.push_back(cur_mx);
            cur_mx=max(arr[i],cur_mx);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};