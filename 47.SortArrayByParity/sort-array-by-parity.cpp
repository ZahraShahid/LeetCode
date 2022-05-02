// Returns array by sorting it by parity
// https://leetcode.com/problems/sort-array-by-parity/

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums;
        int i = 0;
        int j = nums.size() - 1;
        while (i <= j)
        {
            if (nums[i] % 2 != 0)
            {
                swap(i, j, nums);
                j--;
            }
            else
                i++;
        }
        return nums;
    }

    void swap(int i, int j, vector<int> &nums)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
};