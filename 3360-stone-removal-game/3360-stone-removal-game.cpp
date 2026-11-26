class Solution {
public:
    bool canAliceWin(int n) {
        int p =10;
        if(n<p) return false;
        else if(n==p) return true;
        while(n>=p){
            n-=p;
            p--;
        }
        if(p%2!=0) return true;
        else return false;
    }
};