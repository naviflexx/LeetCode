class Solution {
public:
    int secondHighest(string s) {
        int max = 0; int index=0;
        bool k = false; int prev;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                if(s[i]-'0' > max){
                    max = s[i]-'0';
                }
            }
        }
        int IImax =-1;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                if(s[i]-'0' > IImax && s[i]-'0' < max) IImax = s[i]-'0';
            }
        }
        return IImax;
    }
};