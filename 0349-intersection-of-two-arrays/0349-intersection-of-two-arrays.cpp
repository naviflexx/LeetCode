class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
{
    sort(nums1.begin() , nums1.end());
    sort(nums2.begin() , nums2.end());
    vector<int> ans;
    
    int n=nums1.size();
    for(int i=1; i<n; ){
        if(nums1[i]==nums1[i-1]) {
            nums1.erase(nums1.begin()+i);
            n--;
        }
        else i++;
    }
    int m=nums2.size();
    for(int i=1; i<m; ){
        if(nums2[i]==nums2[i-1]) {
            nums2.erase(nums2.begin()+i);
            m--;
        }
        else i++;
    }
    map<int,int> freq;
    for(auto x : nums1) freq[x]++;
    for(auto x : nums2) freq[x]++;
    
    for(auto &z: freq){
        if(z.second>1){
            ans.push_back(z.first);
        }
    }
    return ans;
}
};