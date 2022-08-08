class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        while( i<n && s[i]==' ')i++;
        int ans=1;
        if(s[i]=='-' || s[i]=='+'){
            ans=s[i]=='-'? -1:1;
            i++;
        }
         
       long long int tot=0;
        while(i<n &&s[i]>='0' && s[i]<='9') {
            tot=tot*10+(s[i]-'0');i++;
            if(ans*tot>=INT_MAX) return INT_MAX;
            if(ans*tot<=INT_MIN) return INT_MIN;
            
        }
        return ans*tot;
        
    }
};