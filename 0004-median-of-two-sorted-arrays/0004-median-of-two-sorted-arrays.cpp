class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    int j=0;
    int x=nums2.size();
	while(x>0){
	    nums1.push_back(nums2[j]);
	    j++; x--;
	}
	sort(nums1.begin() , nums1.end());
	
	int k = nums1.size()-1;
	if(nums1.size()%2==0){
	    double f = nums1[(k/2)] + nums1[(k/2)+1];
        return f/2.0;
	}
	else{
	    double f = nums1[k/2];
        return f;
	}
    }
};