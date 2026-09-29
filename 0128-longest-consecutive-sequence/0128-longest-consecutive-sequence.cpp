class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
{
    if(nums.empty()) return 0;
    int n = nums.size() ;
    sort(nums.begin() , nums.end());
	int max=1; int ct =1;
	for(int i=1; i<n; i++){
	    if(nums[i-1]+1==nums[i]){
	        max++;
	    }
        else if(nums[i-1]==nums[i]){
	        continue;
	    }
	    else{
	        if(max>ct) ct=max;
	        max=1;
	    }
	}
    if(max > ct) ct = max;
	return ct;
}
};