class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
    vector<int> num(26,0);
    for(int i=0; i<n; i++){
        num[s[i]-'a']++;
    }
    int mx=-1;
    for(int i=0; i<n; i++){
        if(num[s[i]-'a']==1) {
            mx=i; break;
        }
    }
    return mx;
    }
};