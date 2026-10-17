class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() , n = matrix[0].size();
        vector<vector<int>> sum(m+1 , vector<int>(n+1 , 0));
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                sum[0][j]=0; sum[i][0] = 0;
                sum[i][j] = sum[i-1][j] + sum[i][j-1] + matrix[i-1][j-1] - sum[i-1][j-1];
            }
        }
        int ct=0;
        for(int r=1; r<=m; r++)
            for(int c=1; c<=n; c++)
                for(int r1=r; r1<=m; r1++)
                    for(int c1=c; c1<=n; c1++){
                        if(target == sum[r1][c1] - sum[r-1][c1] - sum[r1][c-1] + sum[r-1][c-1]) ct++;
                    }
    return ct;
    }
};