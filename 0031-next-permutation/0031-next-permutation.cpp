class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1 = nums;
	    sort(nums1.begin() , nums1.end() , greater<int>());
	    if(nums==nums1){
            sort(nums.begin() , nums.end()); return;
        }
        int bp;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                bp=i; break;
            }
        }
        int index=bp+1 , store=nums[bp+1];
        for(int i=bp+2; i<n; i++){
            if(nums[i]>nums[bp] && nums[i] <nums[i-1]){
                store = nums[i];
                index=i;
            }
        }
        swap(nums[bp] , nums[index]);
        sort(nums.begin()+bp+1 , nums.end());

    }
};