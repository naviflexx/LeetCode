class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size(); int sum =0;
        nums.insert(nums.begin(), 0);
        for(int i=1; i<=n; i++){
            if(n%i==0){
                sum += nums[i]*nums[i];
            }
        }   
        return sum;
    }
};