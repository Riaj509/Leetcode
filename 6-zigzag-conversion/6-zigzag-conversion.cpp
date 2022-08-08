class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        int mn=s.size();
        int cover=2*numRows-2;        
        string ans;

        for(int i=0;i<numRows;i++){
            for(int j=0;j+i<s.size();j+=cover){
                ans+=s[j+i];
                if(i>0 && i<numRows-1 && j+cover-i<s.size() )ans+=s[j+cover-i];
            }
        }
        return ans;
          
    }
};