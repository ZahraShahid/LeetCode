// Returns if two given strings are equal after removing backspace from them
// https://leetcode.com/problems/backspace-string-compare/

class Solution
{
public:
    string evaluateString(string s)
    {
        string ans;
        stack<char> stck;
        for (auto c : s)
        {
            if (c != '#')
                stck.push(c);
            else if (!stck.empty())
                stck.pop();
        }
        while (!stck.empty())
        {
            ans += stck.top();
            stck.pop();
        }
        return ans;
    }

public:
    bool backspaceCompare(string s, string t)
    {
        string s_s = evaluateString(s);
        string t_s = evaluateString(t);
        return s_s == t_s;
    }
};