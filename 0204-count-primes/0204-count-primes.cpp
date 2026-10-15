class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        if(n<=3) return 1;
        if(n<=5) return 2;
        if(n<=7) return 3;
        if(n<=11) return 4;
        if(n<=12) return 5;

        int ct=5;
        for(int i=13; i<n; i+=2){
            bool prime = true;
            for(int j=3; 1LL*j*j<=i; j+=2){
                if(i%j==0) {
                    prime = false; break;
                }
            }
            if(prime == true) ct++;
        }
        return ct;
    }
};