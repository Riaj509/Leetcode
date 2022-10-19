class Solution {
public:
    int titleToNumber(string columnTitle) {
        map<char,int>f;
        for(char i='A';i<='Z';i++){
            f[i]=(i-'A')+1;
        }
        long long int ans=0;
        for(auto u : columnTitle){
            ans=ans*26+f[u];
        }
        return ans;
    
    }
};