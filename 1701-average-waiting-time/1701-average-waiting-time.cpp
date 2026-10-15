class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        int n = customers.size();
        vector<int> time(n);
        time[0] = customers[0][0] + customers[0][1];
        double sum = abs(customers[0][1]);

        for(int i=1; i<n; i++){
            if(time[i-1] < customers[i][0]){
                time[i] = customers[i][0] + customers[i][1];
            }
            else time[i] = customers[i][1] + time[i-1];
            sum += time[i] - customers[i][0];
        }
        return sum/n;

    }
};