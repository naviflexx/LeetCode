class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lb=0 , mb=0 , rb=nums.size()-1;
        while(mb<=rb){
            if(nums[mb]==0){
                swap(nums[lb] , nums[mb]); 
                lb++; mb++;
            }
            else if(nums[mb]==1) mb++;
            else{
                swap(nums[mb] , nums[rb]);
                rb--;
            }
        }
    }
};