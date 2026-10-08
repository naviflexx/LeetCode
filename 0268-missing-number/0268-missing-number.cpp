class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int k = nums[n-1] +1;
        for(int i=0; i<n; i++){
            if(nums[i] != i) return i;
        }
        return k;
    }
};