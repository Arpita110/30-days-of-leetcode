/*

240. Search a 2D Matrix II
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true

*/


 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=matrix[0].size()-1;
        
        while(i<matrix.size() && j>=0)
        {
            if(matrix[i][j]==target) 
                return true;
            if(matrix[i][j]>target) 
                j--;
            else 
                i++;
          
        }
        return false;
    }
