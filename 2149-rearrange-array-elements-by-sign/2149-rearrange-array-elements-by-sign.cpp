class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos(n/2); vector<int> neg(n/2);
        int po=0 , ne=0;
        for(int i=0; i<n; i++){
            if(nums[i]<0) {
                neg[ne]=nums[i]; ne++;
            }
            else {
                pos[po]=nums[i]; po++;
            }
        }
        po=0; ne=0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                nums[i]=pos[po]; po++;
            }
            else{
                nums[i] = neg[ne]; ne++;
            }
        }
        return nums;
    }
};