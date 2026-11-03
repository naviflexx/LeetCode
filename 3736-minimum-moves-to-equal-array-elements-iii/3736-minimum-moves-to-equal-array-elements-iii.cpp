class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = *max_element(nums.begin() , nums.end());
        int ans=0;
        for(int ax : nums) ans += abs(ax-max);
        return ans;
    }
};