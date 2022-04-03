// Returns the next permutation of the given vector of integers
// https://leetcode.com/problems/next-permutation/

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int j = -1;
        int n = nums.size();
        for (int i = n - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                j = i - 1;
                break;
            }
        }
        if (j < 0)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        int index;
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > nums[j])
            {
                swap(nums[j], nums[i]);
                reverse(nums.begin() + j + 1, nums.end());
                break;
            }
        }
    }
};