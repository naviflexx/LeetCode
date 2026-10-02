class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
{
    int n=nums.size();
    int product =1;  int k=0;
    for(int i=0; i<n; i++){
        if(nums[i]==0) k++;
    }
    if(k>1){
        for(int i=0; i<n; i++){
            nums[i]=0;
        }
        return nums;
    }
    else if(k==1){
        for(int i=0; i<n; i++){
            if(nums[i]==0) {
                k=i;
                continue;
            }
            product *=nums[i];
        }
        for(int i=0; i<n; i++){
            nums[i]=0;
        }
        nums[k]=product;
        return nums;
    }
    else if(k==0){
        for(int i=0; i<n; i++){
            product *= nums[i];
        }
        for(int i=0; i<n; i++){
            nums[i] = product*pow(nums[i] , -1); 
        }
        return nums;
    }
    return nums;
}
};