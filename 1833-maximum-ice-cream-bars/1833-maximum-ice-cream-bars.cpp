class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max = *max_element(costs.begin() , costs.end());
        vector<int> nums(max+1 , 0);
        for(int x : costs) nums[x]++;
        int ct=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) continue;
            if(i>coins) break;
            else{
                int k = min(nums[i] , coins/i);
                ct +=k; coins -= i*k;
            }
        }
        return ct;
    }
};