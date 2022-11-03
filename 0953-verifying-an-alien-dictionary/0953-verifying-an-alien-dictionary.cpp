class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        if(words.size()==1) return true;
        
        map<char,int>f;
        for(int i=0;i<order.size();++i)f[order[i]]=i;
        
        for(int i=0;i<words.size()-1;i++){
            string s=words[i];
            string s1=words[i+1];
            int j=0,k=0;
            bool ck=false;
            while(j<s.size() && k<s1.size()){
                if(f[s[j]]>f[s1[k]]) return false;
                else if(f[s[j]]<f[s1[k]]) {
                    ck=true;
                    break;
                }
                else {
                    j++,k++;
                }
            }
            if(ck) continue;
            if(j<s.size()) return false; 
        }
        return true;
    }
};