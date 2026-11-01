class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n+1);
        v[0] = 0; int max = 0;
        for(int i=0; i<n; i++){
            v[i+1] = v[i] + nums[i];
            if(nums[i] > max) max = nums[i];
        }
        if(max >= target) return 1;
        int l =0, mini = n+1; 
        for(int i=1; i<=n; i++){
            while(v[i]-v[l] >= target && l<i){
                mini = min(mini , i-l);
                l++;
            }
        }
        return mini == n + 1 ? 0 : mini;
    }
};