class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int max2 =0 , n=nums.size();
        for(int i=0; i<=n-firstLen; i++){
            for(int j=0; j<=n-secondLen; j++){
                if(j>i && j< i+firstLen) continue;
                else if(j+secondLen > i && j< i+firstLen) continue;
                else{
                    int sum = accumulate(nums.begin()+i , nums.begin()+i+firstLen , 0LL);
                    int sum1 = accumulate(nums.begin()+j , nums.begin()+j+secondLen , 0LL);
                    int sum2 = sum + sum1;
                    max2 = max(sum2 , max2);
                }
            }
        }
        return max2;
    }
};