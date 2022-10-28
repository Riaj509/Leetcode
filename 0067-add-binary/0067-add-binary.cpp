class Solution {
public:
    string addBinary(string a, string b) {
        
        if(a.size()<b.size()){
            while(a.size()!=b.size())a='0'+a;
        }
         if(b.size()<a.size()){
             while(a.size()!=b.size())b='0'+b;
         }
        int carry=0;
        string s;
        for(int i=a.size();i>=0;--i){
            if(a[i]=='0' && b[i]=='0'){
                if(carry){
                    s='1'+s;
                    carry=0;
                }
                else s='0'+s;
            }
            else if(a[i]=='1' && b[i]=='1'){
               if(carry)
                    s='1'+s;
                else s='0'+s;
                carry=1;
            }
            else if((a[i]=='0' && b[i]=='1')|| (a[i]=='1' && b[i]=='0')){
                if(carry){
                    s='0'+s;
                    carry=1;
                }
                else s='1'+s;
            }
        }
        
        if(carry)s='1'+s;
        
        return s;
    }
};