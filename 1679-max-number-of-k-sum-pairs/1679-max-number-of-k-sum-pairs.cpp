class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n= nums.size(), ct=0;
        unordered_map<int, int> mp;
        mp[nums[0]] +=1;
        for(int i=1; i<n; i++){
            int ele= k-nums[i];
            if(mp[ele] >0){
            ct++;
            mp[ele]--;
        }
        else{
            mp[nums[i]]++;
    }
        }
        return ct;
    }
};