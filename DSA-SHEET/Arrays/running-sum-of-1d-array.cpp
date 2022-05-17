//https://leetcode.com/problems/running-sum-of-1d-array/

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = sum + nums[i];
            sum = nums[i];
        }
        return nums;
    }
};