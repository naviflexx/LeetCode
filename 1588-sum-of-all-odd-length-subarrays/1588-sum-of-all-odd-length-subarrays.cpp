class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
    int n = arr.size() , max = 0;
	vector<int> sum(n+1 , 0);
	for(int i=1; i<n+1; i++){
	    sum[i] = sum[i-1] + arr[i-1];
	}
	int k=1;
	for(int i=1; i<n+1; i+=2){
	    for(int j=i; j<n+1; j++){
	        max+=sum[j]-sum[j-k];
	    }
	    k+=2;
	}
	return max;
}
};