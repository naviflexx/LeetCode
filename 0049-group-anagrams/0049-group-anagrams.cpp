class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    unordered_map<string , vector<string>> m;
    for(string s : strs){
        string p = s;
        sort(p.begin() , p.end());
        m[p].push_back(s);
    }
    vector<vector<string>> ans;
    for(auto &k : m){
        ans.push_back(k.second);
    }
    return ans;
}
};