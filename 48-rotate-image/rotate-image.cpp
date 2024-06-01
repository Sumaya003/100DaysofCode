class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
        }

        int start = 0,end = n - 1;;
        while(start<end){
            for(int index = 0;index<n;index++){
                swap(matrix[index][start],matrix[index][end]);
            }
            start++;
            end--;
    }
   }
};