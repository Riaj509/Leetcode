class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int tot=numBottles,n=numBottles,m=numExchange;
        while(n>=m){
            tot+=(n/m);
            n=((n%m)+(n/m));
            cout<<tot<<" "<<n<<"\n";
           
        
    }
        
        return tot;
    }
};