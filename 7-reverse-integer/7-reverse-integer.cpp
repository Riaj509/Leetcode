class Solution {
public:
    int reverse(int x) {
        long long temp=0;
while(x!=0){
int rem=0;
rem=x%10;
temp=temp*10+rem;
x=x/10;

    }
    if(temp>INT_MAX or temp<INT_MIN){
return 0;

}
return temp;
}
};