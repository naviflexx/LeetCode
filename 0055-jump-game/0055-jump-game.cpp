class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int s = nums.size();
        if(s==1) return true;
        if(nums[0]==0) return false;
        if(s==3){
            if(nums[0]>1) return true;
            else if(nums[0]==1 && nums[1]>=1) return true;
            else return false;
        }

        for(int i=s-2; i>=0; i--){
            if(nums[i]==0){
                int n=i; int k=2;
                while(n>0){
                    if(nums[n-1]>=k) {
                        break;
                    }
                    else{
                        n--; k++;
                        if(n==0) return false;
                    }
                }
            }
        }
        return true;
    }
};