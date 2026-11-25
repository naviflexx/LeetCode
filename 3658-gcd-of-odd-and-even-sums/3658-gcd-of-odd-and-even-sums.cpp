class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int ct1=0, ct2=0;
        for(int i=1; i<10000; i++){
            if(ct1<n && n%2==0) ct1+=n;
            else if(ct2<n && n%2) ct2+=n;
        }
        return gcd(ct1,ct2);
    }
};