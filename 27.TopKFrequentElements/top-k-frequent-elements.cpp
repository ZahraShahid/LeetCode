// Returns the top k frequent elements in an array.
//  https://leetcode.com/problems/top-k-frequent-elements/

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        vector<int> v;
        for (auto x : nums)
        {
            m[x]++;
        }
        priority_queue<pair<int, int>> maxHeap;
        for (auto &x : m)
        {
            maxHeap.emplace(x.second, x.first);
        }
        while (k--)
        {
            v.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return v;
    }
};