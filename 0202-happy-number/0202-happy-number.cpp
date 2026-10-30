class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n!=1){
            if(st.count(n)) return false;
            st.insert(n);
            int newN=0;
            while(n>0){
                int k = n%10; n /=10;
                newN += k*k;
            }
            n = newN;
        }
        return true;
    }
};