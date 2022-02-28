// Returns the length of the last word in a string seperated by spaces.
// https://leetcode.com/problems/length-of-last-word/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        replace(s.begin(), s.end(), ' ', '\0');
        reverse(s.begin(), s.end());
        int l = 0;
        if (s[0] == '\0')
        {
            int i = 1;
            while (s[i] == '\0')
            {
                i++;
            }
            while (s[i] != '\0')
            {
                i++;
                l++;
            }
        }
        else
        {
            int i = 0;
            while (s[i] != '\0')
            {
                i++;
                l++;
            }
        }

        return l;
    }
};