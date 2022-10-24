class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int con=(i+1)*(n-i);
            con=(con+1)/2;
            sum+=(con*arr[i]);
        }
        
        return sum;
    }
};