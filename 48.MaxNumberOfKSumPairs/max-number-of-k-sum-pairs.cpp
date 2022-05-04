// Returns the maximum number of pairs that sum to k
// https://leetcode.com/problems/max-number-of-k-sum-pairs/
class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        int count = 0;
        for (auto x : nums)
        {
            int requiredNum = k - x;
            if (m[requiredNum] > 0)
            {
                count++;
                m[requiredNum]--;
            }
            else
                m[x]++;
        }
        return count;
    }
};