class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
{
        vector<vector<int>> copy = matrix;
        for(int i=0; i<copy.size(); i++){
            for(int j=0; j<copy[i].size(); j++){
                if(copy[i][j]==0){
                    for(int k=0; k<copy[i].size(); k++){
                        matrix[i][k]=0;
                    }
                    for(int k=0; k<copy.size(); k++){
                        matrix[k][j]=0;
                    }
                }
            }
        }
}
};