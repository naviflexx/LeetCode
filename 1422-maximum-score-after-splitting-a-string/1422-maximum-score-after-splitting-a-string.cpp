class Solution {
public:
    int maxScore(string s) {
    int n = s.size();
	int j=0 , max=0;;
	for(int i=0; i<n-1; i++){
	    int k=0;
	    for(j=0; j<i+1; j++) {
	        if(s[j]=='0') k++;
	    }
	    int m=0;
	    for(int p=j; p<n; p++) {
	        if(s[p]=='1') m++;
	    }
	    if(max<m+k) max = m+k;
	}
	return max;
}
};