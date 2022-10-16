class Solution {
public:
    int romanToInt(string s) {
        map<char,int> trig;
        trig['I']=1;
        trig['V']=5;
        trig['X']=10;
        trig['L']=50;
        trig['C']=100;
        trig['D']=500;
        trig['M']=1000;
        int ans=0;
        for(int i=0;i<s.size();i++ ){
                if(trig[s[i]]<trig[s[i+1]]){
                    ans-=trig[s[i]];
                }
                else ans+=trig[s[i]];
            
        }
        return ans;
    }
};