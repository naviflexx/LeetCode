class Solution {
public:
    int pivotInteger(int n) {
        vector<int> nums(n+1);
        nums[0] =0;
        for(int i=1; i<=n; i++){
            nums[i] = nums[i-1] + i;
        }
        for(int i=1; i<n+1; i++){
            if(nums[i] == nums[n]-nums[i-1]) return i;
        }
        return -1;
    }
};