class Solution {
public:
    int findMin(vector<int>& nums) {
        int k = INT_MAX;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]<k){
                k=nums[i];
            }
        }
        return k;
    }
};