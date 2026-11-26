class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; ){
            if(nums[i]== i+1) {
                i++;
                continue;
            }
            if(nums[i]> 0 && nums[i] <=n){
                long long k = nums[i];
                if(k<0 || k>=n) {
                    i++; continue;
                }
                if(nums[i]==nums[k-1]){
                    i++; continue;
                }
                else swap(nums[i], nums[k-1]);
            } else i++;
        }
        
        for(int i=0; i<n; i++){
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;
    }
};