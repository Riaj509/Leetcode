class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        
        for(int i=1;i<n;i++) arr[i]+=arr[i-1];
        
        int sum=0;
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<=i;j++){
                if((i-j+1) & 1) {
                    if(j==0) sum+=arr[i];
                    else sum+=(arr[i]-arr[j-1]);
                }
            }
        }
        
        return sum;
    }
};