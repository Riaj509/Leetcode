class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int cur_mx=-1;
        int tmp;
        for(int i=arr.size()-1;i>=0;--i){
            tmp=arr[i];
            arr[i]=cur_mx;
            cur_mx=max(cur_mx,tmp);
        }
        return arr;
    }
};