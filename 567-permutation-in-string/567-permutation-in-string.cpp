class Solution {
public:
    
    bool check(int asol[],int nokol[]){
        for(int i=0;i<26;i++){
            if(nokol[i]!=asol[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
       int s_freq[26]={0} ;
        for (auto u : s1)
            s_freq[u-'a']++;
        int n=s2.size()-s1.size();
        bool f=false;
        for(int i=0;i<=n;i++){
            int tmp[26]={0};
            for(int j=0;j<s1.size();j++)tmp[s2[i+j]-'a']++;
            if(check(s_freq,tmp)){
                f=true;
                break;
            }
        }
        return f;
    }
};