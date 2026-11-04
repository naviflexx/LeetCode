class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max = 0 , min = INT_MAX;
        for(int ax: nums){
            if(ax > max) max = ax;
            if(ax < min) min = ax;
        }
        return 1LL*(max-min)*k;
    }
};