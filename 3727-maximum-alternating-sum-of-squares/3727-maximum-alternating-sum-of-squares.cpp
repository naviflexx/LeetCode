class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        long long sum1=0 , sum2=0;
        for(int i=0; i<n; i++){
            if(i<n/2) sum1+=nums[i]*nums[i];
            else sum2+=nums[i]*nums[i];
        }
        return sum2 - sum1;
    }
};