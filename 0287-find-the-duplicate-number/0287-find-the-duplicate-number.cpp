class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    map<int,int> freq;
    for(int x : nums){
        freq[x]++;
    }
    for(auto &z : freq){
        if(z.second>1){
            return z.first;
        }
    }
    return 0;
    }
};