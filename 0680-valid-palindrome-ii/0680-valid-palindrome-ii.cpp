class Solution {
public:
    bool validPalindrome(string s) {
        
        string tmp=s;
        reverse(tmp.begin(),tmp.end());
        if(s==tmp) return true;
        
        
        int i=0,j=s.size()-1;
        int cng=0;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else {
                int l=i+1,r=j;
                int l1=i,r1=j-1;
                
                while(l<=r && s[l]==s[r]){
                    l++;
                    r--;
                }
                 while(l1<=r1 && s[l1]==s[r1]){
                    l1++;
                    r1--;
                }
                if(j-i==1) return true;
                if(s[l]==s[r]) return true;
                else if(s[l1]==s[r1]) return true;
                else return false;
            }
        }
        
        return true;
    }
};