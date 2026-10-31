class Solution {
public:
    int findMin(vector<int>& nums) {
        int lb = 0, rb = nums.size()-1;
        while (lb <rb) {
            int mb =lb +(rb-lb) / 2;
            if (nums[mb] >nums[rb]) lb =mb+1;
            else rb=mb;
        }
        return nums[lb];
    }
};