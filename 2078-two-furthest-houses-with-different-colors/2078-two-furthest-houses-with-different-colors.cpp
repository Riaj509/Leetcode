class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
       int i=0,n=colors.size(),j=colors.size()-1;
        while(colors[i]==colors[j])i++;
        while(colors[j]==colors[0])j--;
        return max(j,n-i-1);
    }
};