class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return 0;
        multiset<char> k;
        for(int i=0; i<s.size(); i++){
            k.insert(s[i]);
        }
        multiset<char> p;
        for(int i=0; i<t.size(); i++){
            p.insert(t[i]);
        }
        if(k==p) return true;
        else return false;

    }
};