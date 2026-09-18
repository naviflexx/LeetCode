class Solution 
{
public:
    int addDigits(int num) 
    {
         while(num>9){
        int x = num;
        int ct=0;
        while(x>0){
            ct += x%10;
            x=x/10;
        }
        num = ct;
    }
    return num;
    }
};