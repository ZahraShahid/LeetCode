// Return the sum of two binary's in a string
// https://leetcode.com/problems/add-binary/

#include <string>
#include <iostream>
#include <stdlib.h>

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string res;
        int carry = 0;
        int sum;
        int len_b = b.length() - 1;
        int len_a = a.length() - 1;
        while (len_b >= 0 || len_a >= 0)
        {
            sum = carry;
            if (len_a >= 0)
                sum += a[len_a] - '0';
            if (len_b >= 0)
                sum += b[len_b] - '0';
            res += to_string(sum % 2);
            carry = sum / 2;
            len_b--, len_a--;
        }
        if (carry != 0)
            res += '1';
        reverse(res.begin(), res.end());
        return res;
    }
};