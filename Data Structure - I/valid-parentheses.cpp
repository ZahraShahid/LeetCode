// Returns true if the parentheses are valid
// https://leetcode.com/problems/valid-parentheses/
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (auto c : s)
        {
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else
            {
                if (st.empty())
                    return false;
                if (st.top() == '(' && c == ')' || st.top() == '{' && c == '}' || st.top() == '[' && c == ']')
                    st.pop();
                else
                    return false;
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};