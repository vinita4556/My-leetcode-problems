class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int rows = matrix.length;
         int cols = matrix[0].length;

         
         //for rows
         for (int i = 0 ; i < rows ; i++ ) {
           // for cols
           for ( int j = 0 ; j < cols ; j++ ){
            // comaprison 
           if (matrix[i][j] == target) {
           return true;
            }
        }
    }
     return false ;
    }
   
}