class Solution {
public:
    int arrangeCoins(int n) {
    long long k=0;
    int ct=0;
    if(n==1) return 1;
    if(n==2) return 1;
    for(int i=1; i<n; i++){    
        k+=i;
        ct++;
        if(k==n) {
            return ct;
        }
        else if(k>n){
            return ct-1;
        }
    }
    return 0;
    }
};