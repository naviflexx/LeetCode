class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> copy(nums1.begin(), nums1.begin() + m);

        nums1.clear();
        int i=0; int j=0;
        while(j<m && i<n){
            if(copy[j]>nums2[i]){
                nums1.push_back(nums2[i]);
                i++;
            }
            else if(copy[j]<nums2[i]){
                nums1.push_back(copy[j]);
                j++;
            }
            else{
                nums1.push_back(copy[j]);
                j++;
                nums1.push_back(nums2[i]);
                i++;
            }
        }
        while (j < m) {
            nums1.push_back(copy[j]);
            j++;
        }
        while (i < n) {
            nums1.push_back(nums2[i]);
            i++;
        }
    }
};