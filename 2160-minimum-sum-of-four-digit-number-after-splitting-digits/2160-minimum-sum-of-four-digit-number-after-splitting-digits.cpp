class Solution {
public:
    int minimumSum(int num) {
        
        string s=to_string(num);
        sort(s.begin(),s.end());
        int a=s[0]-'0',b=s[1]-'0';
        for(int i=2;i<s.size();i++){
            int cur=a*10+(s[i]-'0');
            int cur1=b*10+(s[i]-'0');
            if(cur<cur1)a=a*10+(s[i]-'0');
            else b=b*10+(s[i]-'0');
        }
        return a+b;
    }
};