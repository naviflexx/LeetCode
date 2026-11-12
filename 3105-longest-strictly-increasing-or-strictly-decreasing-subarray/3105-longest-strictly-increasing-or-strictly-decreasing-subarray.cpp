class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n= nums.size();
        int mx =1, mn=1;
        int ct=1;
        for(int i=1; i<n; i++){
            if(nums[i-1] >= nums[i]){
                mx = max(ct , mx); ct=1;
            } else {
                ct++; mx = max(ct , mx);
            }
        }
        ct=1;
        for(int i=1; i<n; i++){
            if(nums[i-1] <= nums[i]){
                mn = max(ct , mn); ct=1;
            } else {
                ct++; mn = max(ct , mn);
            }
        }
        return max(mn , mx);
    }
};