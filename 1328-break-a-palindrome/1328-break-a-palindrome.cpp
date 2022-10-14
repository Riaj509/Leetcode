class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        string s=palindrome;
        if(n<2)return "";
        if(n==2){
            if(s[0]=='a')
                s[1]='b';
            else s[0]='a';
            return s;
        }
        for(int i=0;i<n/2;i++){
            if(s[i]!='a'){
                s[i]='a';
                return s;
            }
        }
        s[n-1]='b';
        return s;
    }
};