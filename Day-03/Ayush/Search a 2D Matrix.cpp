// 1st Approach is Navie Approach in this we directly traverse to the matrix and find the element
// time complexity O(m*n)
// Space complexity O(1)
  
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;
    }
};


// 2nd Approach is using Search from the top-right element and reduce the search space by one row or column at each time.
// eg :  
[[ 1,  4,  7, 11, 15],
 [ 2,  5,  8, 12, 19], 
 [ 3,  6,  9, 16, 22],
 [10, 13, 14, 17, 24],
 [18, 21, 23, 26, 30]]
//  Suppose we want to search for 12 in the above matrix. compare 12 with the top-right element nums[0][4] = 15. Since 12 < 15
// 12 cannot appear in the column of 15 since all elements in that column are greater than or equal to 15. Now we reduce the search space by one column.
// We further compare 12  with nums[0][3] = 11. Since 12 > 11, 
// 12 cannot appear in the row of 11 since all elements in this row are less than or equal to 11 . 
// Now we reduce the search space by one row (the first row). We move on to compare 12 with the top-right element of the remaining matrix,
// which is nums[1][3] = 12. Since it is equal to 12, we return true.
// And if we don't get 12 we return false


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=matrix[0].size()-1;
        while(i<matrix.size() && j>=0)
        {
            if(matrix[i][j]==target){ 
                return 1; 
            }
            else if(matrix[i][j]>target)
                j--;
            else
                i++;
        }
        return 0;
    }
};

