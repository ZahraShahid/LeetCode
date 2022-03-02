// Return the array after plus one
// https://leetcode.com/problems/plus-one/

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        bool carry = false;
        int i = digits.size() - 1;
        do
        {
            digits[i]++;
            if (digits[i] > 9)
            {
                carry = true;
                digits[i] = 0;
            }
            else
                carry = false;
            i--;
        } while (carry && i >= 0);

        if (carry)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};