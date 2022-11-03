class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        
        vector<int>ans;
        int i=num.size()-1;
        int cary=0;
        int n=k;
       while(n>0 && i>=0){
           
           int a=n%10;
           int b=num[i];
           a+=(b+cary);
           if(a<=9){
               ans.push_back(a);
               cary=0;
           }
           else {
               ans.push_back(a%10);
               cary=1;  
           }
           n/=10;
           --i;
       }
        while(i>=0){
            int x=num[i]+cary;
            if(x>9){
                ans.push_back(x%10);
                    cary=1;
            }
            else {
                ans.push_back(x);
             cary=0;

            }
            --i;
        }
        
        while(n>0){
            int x=n%10+cary;
            if(x>9){
                ans.push_back(x%10);
                    cary=1;
            }
            else {
                ans.push_back(x);
                               cary=0;

            }
           n/=10;
        }
        if(cary) ans.push_back(cary);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};