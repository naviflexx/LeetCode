class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int rts = k%n;
        if(k==0) return;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + rts);
        reverse(nums.begin() + rts, nums.end());    
    }
};