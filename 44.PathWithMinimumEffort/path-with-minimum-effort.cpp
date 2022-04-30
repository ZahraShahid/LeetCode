// Returns the path which rewuires minmum effort to reach the end of the array
// https://leetcode.com/problems/path-with-minimum-effort/

class Solution
{
public:
    int minimumEffortPath(vector<vector<int>> &heights)
    {
        int n = heights.size();
        int m = heights[0].size();
        int ans = 0;
        using pp = pair<int, pair<int, int>>;
        priority_queue<pp, vector<pp>, greater<pp>> pq;
        pq.push({0, {0, 0}});
        while (!pq.empty())
        {
            int effort = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();

            if (heights[x][y] == -1)
                continue;
            int ht = heights[x][y];
            heights[x][y] = -1;
            ans = max(ans, effort);

            if (x == n - 1 && y == m - 1)
                return ans; // at the end of array

            if (x - 1 >= 0 && heights[x - 1][y] != -1)
                pq.push({abs(ht - heights[x - 1][y]), {x - 1, y}});
            if (y - 1 >= 0 && heights[x][y - 1] != -1)
                pq.push({abs(ht - heights[x][y - 1]), {x, y - 1}});
            if (x + 1 <= n - 1 && heights[x + 1][y] != -1)
                pq.push({abs(ht - heights[x + 1][y]), {x + 1, y}});
            if (y + 1 <= m - 1 && heights[x][y + 1] != -1)
                pq.push({abs(ht - heights[x][y + 1]), {x, y + 1}});
        }

        return 0;
    }
};