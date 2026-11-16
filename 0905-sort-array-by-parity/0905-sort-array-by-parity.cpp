class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                ans[j]=nums[i]; j++;
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i]%2!=0){
                ans[j]=nums[i]; j++;
            }
        }
        return ans;
    }
};