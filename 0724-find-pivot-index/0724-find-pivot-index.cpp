class Solution {
public:
    int pivotIndex(vector<int>& nums) 
{
    int n = nums.size();
	vector<long long> sum(n+1);
	sum[0]=0;
	for(int i=1; i<=n; i++){
	    sum[i] = sum[i-1] + nums[i-1];
	}
	
	int l=0; int r=n+1;
	int m = (l+r)/2;
	for(int m=0; m<n; m++){
    if(sum[m] == sum[n] - sum[m+1]){
        return m;
    }
}
return -1;
	return -1;
}
};