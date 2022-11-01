class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name==typed) return true;
        if(typed.size()<name.size()) return false;
        
        int n=name.size();
        int m=typed.size();
        int i=0,j=0;
        while(j<m){
            if(name[i]==typed[j]){
                i++;
                j++;
            }
            else if(name[i]!=typed[j]) {
                if(j!=0 && typed[j]==typed[j-1]) j++;
                else return false;
            }
            
        }
        // cout<<i<<endl;
        if(i==n) return true;
        else return false;
        
    }
};