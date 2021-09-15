class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int a,b=matrix[0].size(),c;
        for(a=0;a<matrix.size();a++)
        {
            if(target<matrix[a][b-1])
                break;
            else if(target==matrix[a][b-1])
                return true;
        }
        if(a==matrix.size())
            return false;
        for(c=0;c<matrix[0].size();c++)
        {
            if(target==matrix[a][c])
                break;
        }
        if(c==matrix[0].size())
            return false;
        else
            return true;
    }
};
