class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n= nums.size();
        set<vector<int>> st;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                set<int> st2;
                for(int k=j+2; k<n; k++){
                    st2.insert(nums[k-1]);
                    long long sum = nums[i] ; sum+= nums[j]; sum += nums[k];
                    int num = target - sum;
                    if(st2.find(num) != st2.end()){
                        if(target == sum+num){
                            vector<int> temp={nums[i], nums[j], nums[k], (int)num};
                            sort(temp.begin(), temp.end());
                            st.insert(temp);
                        }
                        
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};