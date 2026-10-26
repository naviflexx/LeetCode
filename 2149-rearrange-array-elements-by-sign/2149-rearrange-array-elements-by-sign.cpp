class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr(nums.size());
        int pos=0 , neg =1;
        for(int ax : nums){
            if(ax<0) {
                arr[neg] = ax; neg+=2;
            }
            else {
                arr[pos] = ax; pos+=2;
            }
        }
        return arr;
    }
};