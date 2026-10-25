class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin() , costs.end());
        int maxIce=0;
        for(int ax : costs){
            if(coins >= ax){
                coins -= ax; maxIce++;
            }
            else break;
        }
        return maxIce;
    }
};