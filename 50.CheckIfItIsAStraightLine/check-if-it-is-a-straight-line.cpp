// Returns true if the given points lie on the straight line

class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int m = coordinates.size();
        if (m == 1)
            return false; // one point is not a straight line
        if (m == 2)
            return true; // two points are always a straight line
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x_diff = coordinates[1][0] - x0;
        int y_diff = coordinates[1][1] - y0;
        for (int i = 0; i < m; i++)
        {
            // Two point formula of line, if (x2-x1)*(y1-y0) = (x1-x0)(y2-y1), then a straight line.
            if (x_diff * (coordinates[i][1] - y0) != y_diff * (coordinates[i][0] - x0))
                return false;
        }

        return true;
    }
};