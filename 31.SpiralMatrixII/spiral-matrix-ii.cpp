// Returns the spiral matrix of size n x n
// https://leetcode.com/problems/spiral-matrix-ii/

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> v(n, vector<int>(n));
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;
        int c = 1;
        while (true)
        {
            if (left > right)
                break;
            // add top row
            for (int i = left; i <= right; i++)
            {
                v[top][i] = c++;
            }
            top++;

            if (bottom < top)
                break;
            // add right column
            for (int i = top; i <= bottom; i++)
            {
                v[i][right] = c++;
            }
            right--;

            if (left > right)
                break;
            // add bottom row
            for (int i = right; i >= left; i--)
            {
                v[bottom][i] = c++;
            }
            bottom--;

            if (bottom < top)
                break;
            // add left column
            for (int i = bottom; i >= top; i--)
            {
                v[i][left] = c++;
            }
            left++;
        }

        return v;
    }
};