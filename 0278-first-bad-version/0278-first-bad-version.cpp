// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        if(isBadVersion(n)) return firstBadVersion(n-1);
        else return n+1;
    }
};