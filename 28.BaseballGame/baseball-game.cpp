// Returns the total score of the baseball game given the rules to add up the score
// https://leetcode.com/problems/baseball-game/

class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> record;
        for (auto x : ops)
        {
            int n = record.size() - 1;
            if (x == "C")
            {
                record.pop_back();
            }
            else if (x == "D")
            {
                record.push_back(record[n] * 2);
            }
            else if (x == "+")
            {
                record.push_back(record[n] + record[n - 1]);
            }
            else
            {
                int val = stoi(x);
                record.push_back(val);
            }
        }
        int sum = accumulate(record.begin(), record.end(), 0);
        return sum;
    }
};