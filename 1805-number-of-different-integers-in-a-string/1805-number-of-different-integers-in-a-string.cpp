class Solution {
public:
    int numDifferentIntegers(string word) {
        
        
        set<string>s;
        string tmp;
        int cnt=0;
        for(int i=0;i<word.size();++i){
            
            if(word[i]>='a' && word[i]<='z'){
                if(tmp.size())s.insert(tmp);
                if(cnt) s.insert("0");
                cnt=0;
                tmp="";
            }
            else {
                
                if(word[i]=='0'){
                    if(tmp.size())tmp+=word[i];
                    else cnt++;
                }
                else {
                    if(cnt)cnt=0;
                    tmp+=word[i];
                }
            }
        }
        if(tmp.size()) s.insert(tmp);
        if(cnt) s.insert("0");
        return s.size();
    }
};