class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r2 = mat.size();
        int c2 = mat[0].size();
        
        if (r2 * c2 != r * c) {
            return mat;
        }
        
        vector<vector<int>> newMat (r, vector<int>(c));
        
        int i2 = 0, j2 = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (j2 == c2) {
                    i2++;
                    j2 = 0;
                }
                newMat[i][j] = mat[i2][j2];
                j2++;
            }
        }
        
        return newMat;
    }
};
