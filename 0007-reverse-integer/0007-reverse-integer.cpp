class Solution 
{
    public:
    int reverse(int x) 
    {
        if(x==0){
            return x;
        }
        int n = x;
        while(true){
            if(x%10==0){
            x=x/10;
            }
            else{
                break;
            }
        }
        string s = to_string(x);
        string rev(s.rbegin() , s.rend());
        long long z = stoll(rev);
        if(z > INT_MAX || z < INT_MIN) {
            return 0;
        }
        else if(n>0){
            return z;
        }
        else{
            return -z;
        }
    }

};