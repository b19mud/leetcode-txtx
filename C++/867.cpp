class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int column = A[0].size();
        int row = A.size();
        vector<vector<int>> B(column,vector<int> (row));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                B[j][i] = A[i][j];
            }
        }
        return B;
    }
};