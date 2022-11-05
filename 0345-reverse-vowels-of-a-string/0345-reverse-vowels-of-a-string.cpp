class Solution {
public:
    
    bool vowel(char a){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' ||a=='E' || a=='I' || a=='O' || a=='U') return true;
        return false;
    }
    string reverseVowels(string s) {
        
        int i=0,j=s.size()-1;
        
        while(i<j){
            if(!vowel(s[i]))i++;
            if(!vowel(s[j]))j--;
            if(vowel(s[i])&& vowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};