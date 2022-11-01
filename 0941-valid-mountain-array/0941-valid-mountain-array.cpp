class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size()<3) return false;
        if(arr[0]>arr[1] || arr[arr.size()-1]>arr[arr.size()-2]) return false;
        bool f=false;
        for(int i=0;i<arr.size();++i){
            if(i+1<arr.size()){
             if(arr[i]>arr[i+1]){
                if(!f) f=true;
            }
            else if(arr[i]==arr[i+1]) return false;
            else if(arr[i]<arr[i+1] && f) return false;
            }
         
        }
        return true;
        
    }
};