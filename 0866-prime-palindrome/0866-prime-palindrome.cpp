class Solution {
public:
    int primePalindrome(int n) {
        if(n==1) return 2;
        if(n==2) return 2;
        if(n%2==0) n++;
        for(int i=n; ; i+=2){
            int k=0;
            int temp=i;
            while(temp>0){
                k= k*10+temp%10;
                temp /=10;
            }
            if(i!=k) continue;
            bool prime = true;
            for(int j=3; j*j<=i; j+=2){
                if(i%j == 0){
                    prime = false;
                    break;
                }
            }
            if(i==k && prime) return i;
        }
    }
};