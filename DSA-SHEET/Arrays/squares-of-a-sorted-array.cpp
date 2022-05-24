// https://leetcode.com/problems/squares-of-a-sorted-array/
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = square(nums[i]);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
    int square(int x)
    {
        return x * x;
    }
};