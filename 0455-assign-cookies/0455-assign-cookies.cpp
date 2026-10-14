class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size();
        int n = s.size();
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        int ch=0; int coo=0;
        int ct=0;
        while(ch<m && coo<n){
            if(g[ch]<=s[coo]){
                ch++; coo++;
                ct++;
            }
            else coo++;
        }
        return ct;
    }
};