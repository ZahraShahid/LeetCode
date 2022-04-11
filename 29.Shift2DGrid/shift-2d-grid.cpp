// Return the 2d array after shifting k times
// https://leetcode.com/problems/shift-2d-grid/

class Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {
        int m = grid[0].size();
        int n = grid.size();
        // Create a vector containing "n" vectors each of size "m".
        vector<vector<int>> res(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int y = (j + k) % m;           // j + number of cols added %m
                int x = (i + (j + k) / m) % n; // i + nuber of rows added %n
                res[x][y] = grid[i][j];
            }
        }

        return res;
    }
};