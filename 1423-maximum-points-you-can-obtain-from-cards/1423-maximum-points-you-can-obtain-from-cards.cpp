
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k){
        int n = cardPoints.size();
        vector<int> nums(n+1, 0);
        for(int i=0; i<n; i++){
            nums[i+1] =nums[i] +cardPoints[i];
        }
        int ans =0;
        for(int i=0; i<=k; i++) {
            int left =nums[i];
            int right =nums[n] -nums[n-k+i];
            ans = max(ans, left +right);
        }
        return ans;
    }
};
