class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int x : nums) m[x]++;
        int max = 0;
        int k=0;
        for(auto &p : m){
            if(p.second > max){
                max = p.second;
                k = p.first;
            }
        }
        return k;
    }
};