class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),lft=0,right=n-1,mn=INT_MAX,area=0;
        while(lft<=right){
            mn=min(height[lft],height[right]);
            area=max(area,mn*(right-lft));
            if(height[right]>=height[lft]) lft++;
            else right--;
        }
        return area;
        
    }
};