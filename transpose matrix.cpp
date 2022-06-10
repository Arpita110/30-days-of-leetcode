/***
Transpose Matrix
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
**/

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m=matrix[0].size();
        int i=0;
        int j=0;
        vector<vector<int>>temp;
        for(i=0;i<m;i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                v.push_back(matrix[j][i]);
            }
            temp.push_back(v);
        }
        return temp;
        
    }
