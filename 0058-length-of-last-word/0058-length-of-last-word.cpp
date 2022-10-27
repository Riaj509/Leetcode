class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0,ls=-1;
        for(int i=s.size()-1;i>=0;--i){
          if(s[i]==' '){
              if(ls==-1)continue;
              else break;
          }
            else {ls=1;
                cnt++;
                 }
                
            
        }
        
        return cnt;
    }
};