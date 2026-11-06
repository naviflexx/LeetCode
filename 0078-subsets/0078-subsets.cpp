class Solution {
public:
    vector<vector<int>> subsets(vector<int>& a) {
        vector<vector<int>> r = {{}};
        for (int x : a) {
            int s = r.size();
            for (int i = 0; i < s; i++) {
                vector<int> t = r[i];
                t.push_back(x);
                r.push_back(t);
            }
        }
        return r;
    }
};