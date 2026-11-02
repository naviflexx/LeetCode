class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums.size();
        for(int ax : nums) mp[ax]++;
        for(auto &p : mp){
            if(p.second > n/3) ans.push_back(p.first);
        }
        return ans;
    }
};