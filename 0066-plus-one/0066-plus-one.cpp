class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]<9){
            digits[n-1]++;
        return digits;
        }
        int carry=1;
        bool f=false;
        for(int i=n-1;i>=0;i--){
            if(carry+digits[i]>9){
                digits[i]=0;
                if(i==0)f=true;
            }
            else {digits[i]++;carry=0;
                  
                  break;
        }
            
    }
        if(f) digits.insert(digits.begin(),1);
        return digits;
    }
};