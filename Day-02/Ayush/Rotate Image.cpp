class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(),i,j;
        //first we take transpose of the matrix
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //then we take reverse about the middle element
        for(i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
