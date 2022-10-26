class Solution {
public:
    int strStr(string haystack, string needle) {
        string s,s1;
        s=haystack;
        s1=needle;
        for(int i=0;i+s1.size()-1<s.size();i++) {
            if(s.substr(i,s1.size())==s1) return i;
        }
        return -1;
    }
   
};