class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size(), m = mat[0].size();
        for(int i=0;i<4;i++){
            reverse(mat.begin(),mat.end());
            for(int i=0;i<n;i++){
                for(int j=i+1;j<m;j++) swap(mat[i][j],mat[j][i]);
            }
            if(mat==target) return true;
        }
        return false;
    }
};