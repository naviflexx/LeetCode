class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int lb=0 , rb=nums.size()-1;
        while(lb<=rb){
            if(nums[lb]%2!=0){
                swap(nums[lb],nums[rb]); rb--;
            } else lb++;
        } return nums;
    }
};