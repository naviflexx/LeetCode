class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int mx= nums[0];
        for(int i=0;i<n; i++){
            mx = max(nums[i], mx);
            v[i] = gcd(nums[i], mx);
        }
        sort(v.begin(), v.end());
        long long ans=0; int j=n-1;
        for(int i=0; i<n/2; i++){
            ans+= gcd(v[i], v[j-i]);
        }
        return ans;
    }
};