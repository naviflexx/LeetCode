class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
{
        vector<int> result;
        int n = nums1.size();
        for(int i=0; i<n; i++){
           auto it = find(nums2.begin() , nums2.end() , nums1[i]);
           if(it != nums2.end()){
            result.push_back(nums1[i]);
            nums2.erase(it);
           }
        }
        return result;
}
};