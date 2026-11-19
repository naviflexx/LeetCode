class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        auto it =lower_bound(nums.begin(), nums.end(), target);
        if(it==nums.end() || *it !=target) return ans;
        ans[0] =it-nums.begin();
        auto it2 =upper_bound(nums.begin(), nums.end(), target);
        ans[1] =it2-nums.begin()-1;
        return ans;
    }
};