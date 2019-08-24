class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        int column = nums[0].size();
        if(row*column != r*c)
        {
            return nums;
        }
        vector<vector<int>> new_nums(r,vector<int>(c));
        for (int i = 0; i < row * column; i++)
        {
            new_nums[i / c][i % c] = nums[i / column][i % column];
        }
        return new_nums;


    }
};