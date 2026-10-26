class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct =0; int k = nums[0];
        if(nums.size()==1) return nums[0];
        for(int i=0; i<nums.size(); i++){
            if(ct==0){
                k= nums[i]; ct =1;
            }
            else if(k==nums[i]) ct++;
            else ct--;
        }
        return k;
    }
};