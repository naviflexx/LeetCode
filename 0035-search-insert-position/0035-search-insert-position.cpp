class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
{
    int left = 0;
    int n = nums.size();
    int right = n;
    if(target<nums[0]) return 0;
    for(int i=0; i<n; i++){
        int mid = left + (right-left)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            if(right==left+1){
                return right;
            }
            right = mid;
        }
        else{
            if(right==left+1){
                return right;
            }
            left = mid;
        }
    }
    return left;
}
};