class Solution {
public:
    int solve(int diff, vector<int>& arr) {
    int start=0, end=0;
    int count=0;
    while(start<=end && end<arr.size()){
        if(arr[end]-arr[start]==2*diff){
            if(binary_search(&arr[start], &arr[end], arr[start]+diff)){
                count++;
            }
            start++;
        }else if(arr[end]-arr[start]<2*diff){
            end++;
        }else{
            start++;
        }
    }
    return count;
}
    int arithmeticTriplets(vector<int>& nums, int diff) {
        return solve(diff, nums);
    }
};