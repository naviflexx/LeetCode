class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0; i<n; i++){
            int ct=0;
            int temp = nums[i];
            while(temp>0){
                temp /=10;
                ct++;
            }
            if(ct%2==0) sum++;
        }
        return sum;
    }
};