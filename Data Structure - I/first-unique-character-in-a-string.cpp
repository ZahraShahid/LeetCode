// Returns the index of the first unique character in a string
// https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int ind = -1;
        unordered_map<char, int> m;
        for (auto x : s)
            m[x]++;

        for (int i = 0; i < s.length(); i++)
        {
            if (m[s[i]] == 1)
            {
                ind = i;
                break;
            }
        }

        return ind;
    }
};