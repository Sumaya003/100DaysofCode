class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int left = 0, right = n - 1;
        
        while(left<=right){
            int mid = left + (right - left) / 2;
            int maxRow = 0;

            // Find the maximum element in the middle column
            for (int i = 0; i < m; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            // Check if the max element in this column is a peak
            bool isLeftSmaller = (mid == 0 || mat[maxRow][mid] > mat[maxRow][mid - 1]);
            bool isRightSmaller = (mid == n - 1 || mat[maxRow][mid] > mat[maxRow][mid + 1]);

            if (isLeftSmaller && isRightSmaller) {
                // Found a peak
                return {maxRow, mid};
            } else if (!isLeftSmaller) {
                // Move search to the left half
                right = mid - 1;
            } else {
                // Move search to the right half
                left = mid + 1;
            }
        }
        return {-1, -1};
    }
};