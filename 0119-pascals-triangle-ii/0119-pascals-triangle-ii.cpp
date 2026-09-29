class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
{
    int numRows = rowIndex+1;
     vector<vector<int>> generate(numRows);
        for(int i=0; i<numRows; i++){
        vector<int>temp(i+1);
        temp[0]=1;
        temp[i]=1;
        for(int j=1; j<i; j++){
            temp[j]=generate[i-1][j-1]+generate[i-1][j];
        }
        generate[i]=temp;
    }
    return generate[rowIndex];
}
};