class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> copy = nums;
        nums.clear();
        int k = copy.size();
        for(int i=0; i<k; i++){
            if(copy[i]!=0){
                nums.push_back(copy[i]);
            }
        }
        int p=nums.size();
        for(int i=0; i<k-p; i++){
            nums.push_back(0);
        }
    }
};