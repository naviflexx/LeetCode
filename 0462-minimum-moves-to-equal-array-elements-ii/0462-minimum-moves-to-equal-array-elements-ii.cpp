class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int ans =0 , temp; 
        temp = nums[n/2];
        for(int ax : nums) ans += abs(ax-temp);
        return ans;
    }
};