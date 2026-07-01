class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
    
        // Check if conversion is possible
        if (original.length != m * n) {
            return new int[0][0];
        }

        //CREATE 2-D ARRAY
        int[][]ans = new int[m][n];

        //METHODS
         int k = 0 ; // using variable k

        //CONDITION
        for (int i = 0 ; i < m ; i++)//for rows
        {
          for (int j = 0 ; j < n ; j++)// for cols
          {
            ans[i][j] = original[k++];
          }
        }

        return ans ;


    }
}