// Returns the index of a target number in a sorted array, if its present or returns the index where it would be if it were present.
// https://leetcode.com/problems/search-insert-position/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};