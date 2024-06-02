class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int startRow = 0;
        int lastCol = col - 1;

        while(lastCol>=0 && startRow<row){
            int element = matrix[startRow][lastCol];
            if(target == element)
                return true;

            if(target > element)
                startRow++;
            else
                lastCol--;
        }
        return false;        
    }
};