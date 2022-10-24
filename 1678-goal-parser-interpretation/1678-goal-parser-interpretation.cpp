class Solution {
public:
    string interpret(string command) {
        string s=command,tmp;
        
        for(int i=0;i<s.size();++i){
            if(s[i]=='G')tmp+=s[i];
            else{
                if(s[i]=='('){
                    if(s[i+1]==')'){
                        tmp+='o';
                        ++i;
                    }
                    else if(s[i+1]=='a'){
                        tmp+="al";
                        i+=3;
                    }
                }
                
            }
        }
        return tmp;
        
    }
};