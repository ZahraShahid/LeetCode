// Returns true if the 1's in an array are seperated by at least k number of zeros
// https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/

class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        if (k == 0)
            return true;
        int prev = -1;
        int curr;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                curr = i;
                if ((curr - prev - 1) < k && prev != -1)
                    return false;
                prev = curr;
            }
        }
        return true;
    }
};