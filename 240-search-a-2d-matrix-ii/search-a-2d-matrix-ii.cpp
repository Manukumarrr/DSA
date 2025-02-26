class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false;
        for (int i = matrix.size() - 1; i >= 0; i--) {
    for (int j = matrix[i].size() - 1; j >= 0; j--) { 
            if(matrix[i][j]==target)
            {
                found= true;
            }
           
        }
    }
    return found;
    }
};