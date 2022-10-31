class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int m=flowerbed.size();
        if(m==1){
            if((flowerbed[0]==0 && n==1) || n==0) return true;
            else false;
        } 
        int i=0;
        while(i<m){
            if(flowerbed[i]==0){
                if(i-1>=0 && flowerbed[i-1]==0 && i+1<m && flowerbed[i+1]==0){
                    if(n){
                        n--;i+=2;
                    }
                    else return true;
                }
                else if(i==0 && i+1<m && flowerbed[i+1]==0){
                    if(n){
                        n--;
                        i+=2;
                    }
                    else return true;
                }
                else if(i==m-1 && i-1>=0 && flowerbed[i-1]==0){
                    if(n){n--;
                          i+=2;
                         }
                    else return true;
                }
                else i++;
            }
            else i+=2;
            
        }
        
        if(n==0) return true;
        else return false;
    }
};