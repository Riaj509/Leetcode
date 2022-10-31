class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        map<int,int>cnt;
        
        for(auto u : deck){
            cnt[u]++;
        }
        
        int gc=-1;
        for(auto u : cnt){
            if(gc==-1)gc=u.second;
            else gc=gcd(gc,u.second);
        }
        
        return gc>=2;
    }
    
    int gcd(int x,int y){
       
        if(x==0) return y;
        else return  gcd(y%x,x);
    }
    
};