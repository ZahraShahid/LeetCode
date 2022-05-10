// Return the number of combinations that sum to n, of size k.
// https://leetcode.com/problems/combination-sum-iii/
class Solution
{
public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        if (n < k)
            return {};
        vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<vector<int>> ans;
        vector<int> ds;
        findCombo(0, n, v, ds, ans, k);
        return ans;
    }
    void findCombo(int ind, int target, vector<int> &v, vector<int> &ds, vector<vector<int>> &ans, int &k)
    {
        if (target < 0)
            return;
        if (k == 0 && target == 0)
        {
            ans.push_back(ds);
            return;
        }
        for (int i = ind; i < 9; i++)
        {
            ds.push_back(v[i]);
            findCombo(i + 1, target - v[i], v, ds, ans, --k);
            ds.pop_back();
            k++;
        }
    }
};