//https://leetcode.com/problems/add-strings/

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string ans;
        int j = num1.size() - 1;
        int i = num2.size() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0)
        {
            int sum = carry;
            if (i >= 0)
                sum += num2[i--] - '0';
            if (j >= 0)
                sum += num1[j--] - '0';
            ans += to_string(sum % 10);
            carry = sum / 10;
        }
        if (carry > 0)
            ans += to_string(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};