class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //TRANSPOSE 
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //REVERSE EVERY ROW
        for(int i=0; i<n; i++){
            //ROW  MATRIX [i]
            reverse(matrix[i].begin(),matrix[i].end());
        }

       /*brute force
        vector<vector<int>> ans(n, vector<int>(n));
        // rotated matrix banana
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][n - 1 - i] = matrix[i][j];
            }
        }
        // ans ko matrix mein copy karna
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = ans[i][j];
            }
        }*/
    }
};