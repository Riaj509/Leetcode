class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        int x=coordinates[0]-'a';
        int y=coordinates[1]-'0';
        x++;
        if(x&1 && y&1) return false;
        if(x%2==0 && y%2==0) return false;
        return true;
    }
};