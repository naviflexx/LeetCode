class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        mp[0]=1;
        int sum=0 , ct=0 , def=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            int find = sum-k;
            ct += mp[find];
            mp[sum] +=1;
        }
        return ct;
    }
};