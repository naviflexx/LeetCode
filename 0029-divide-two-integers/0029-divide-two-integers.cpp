class Solution {
public:
    int divide(int dividend, int divisor) 
{
    long long dividend1 = (long long)dividend;
    long long divisor1 = (long long)divisor;
    if(dividend == INT_MIN && divisor == -1) return INT_MAX;
    if(divisor==1) return dividend;
    long long sum=0;
    if((dividend1>0 && divisor1<0) || (dividend1<0 && divisor1>0)){
        divisor1 =llabs(divisor1);
        dividend1 =llabs(dividend1);
        while(dividend1>=divisor1){
            dividend1 -=divisor1;
            sum++;
        }
        sum=-sum;
        return sum;
    }
    
    else if((dividend1>0 && divisor1>0) || (dividend1<0 && divisor1<0)){
        divisor1 =llabs(divisor1);
        dividend1 =llabs(dividend1);
        while(dividend1>=divisor1){
            dividend1 -=divisor1;
            sum++;
        }
        return sum;
    }
    return sum;
}
};