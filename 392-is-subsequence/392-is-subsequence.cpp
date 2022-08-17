class Solution {
public:
 bool isSubsequence(string s, string t) {
        int n=s.size(),m=t.size();
        if(is_sub(s,t,n,m))
          return true;
        return false;
    }
    
    bool is_sub(string &s,string &t, int n, int m){
        if(n==0) return true;
        if(m==0)return false;
         if(s[n-1]==t[m-1]) return is_sub(s,t,n-1,m-1);
        return is_sub(s,t,n,m-1);
    }
};