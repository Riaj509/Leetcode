class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dirx=0,diry=1;
        int x=0,y=0;
        string s=instructions;
        for(int i=0;i<s.size();i++){     
            if(s[i]=='L'){
                swap(dirx,diry);
                dirx=(-1)*dirx;
            }
            else if(s[i]=='R') {
                swap(dirx,diry);
                diry=(-1)*diry;
            }
            else {
                x+=dirx;
                y+=diry;
            }
        }
        return ((x==0 && y==0) || !(dirx==0 && diry==1)); 
    }
};