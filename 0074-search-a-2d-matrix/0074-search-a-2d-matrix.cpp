class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l1=0; int r1=matrix.size()-1;
        int row=0;
        for(int i=0; i<matrix.size(); i++){
            int m1 = (l1+r1)/2;
            if(target==matrix[m1][matrix[m1].size()-1]) return true;
            if(target==matrix[m1][0]) return true;
            if(target>matrix[m1][0] && target<matrix[m1][matrix[i].size()-1]){
                row = m1;
                break;
            }
            else if(target<matrix[m1][matrix[i].size()-1]){
                r1 = m1-1;
            }
            else l1 = m1+1;
        }
        int l2=0; int r2=matrix[row].size()-1;
        for(int i=0; i<matrix[row].size(); i++){
            int m2 = (l2+r2)/2;
            if(matrix[row][m2]==target) return true;
            else if(target<matrix[row][m2]) r2=m2-1;
            else l2 = m2+1;
        }
        return false;
    }
};