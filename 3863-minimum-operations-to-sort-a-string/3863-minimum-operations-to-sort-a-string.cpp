class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        bool sorted=true;
        for(int i=1; i<n; i++){
            if(s[i]<s[i-1]) {
                sorted = false; break;
            }
        }
        if(sorted) return 0;
        
        if(n==2) return -1;
        if(n==1) return 0;

        char min='z' , max='a';
        for(int i=0; i<n; i++){
            if(s[i]<min) min=s[i];
            if(s[i]>max) max=s[i];
        }
        if(s[0]==min || s[n-1]==max) return 1;
        for (int i=1; i<n-1; i++) {
            if (s[i]==min || s[i]==max) return 2;
        }
        return 3;
        //else if(s[0]==max || s[n-1]==min) return 3;
        //else return 2;
    }
};