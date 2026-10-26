class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0] , maxi = -1;
        bool okay =true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] < nums[i]){
                okay = false; break;
            }
        }
        if(okay == true) return -1;
        for(int i=1; i<nums.size(); i++){
            int temp = nums[i] - mini;
            maxi = max(maxi , temp);
            mini = min(mini , nums[i]);
        }
        return maxi;
    }
};