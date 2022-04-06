// Returns if the string Ransomenote can be constructed from the string magazine given.
// https://leetcode.com/problems/ransom-note/

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if (magazine == ransomNote)
            return true;
        unordered_map<char, int> m;
        for (auto x : ransomNote)
            m[x]++;
        for (auto l : magazine)
        {
            if (m[l])
            {
                m[l]--;
            }
        }
        for (auto x : ransomNote)
        {
            if (m[x] >= 1)
                return false;
        }

        return true;
    }
};