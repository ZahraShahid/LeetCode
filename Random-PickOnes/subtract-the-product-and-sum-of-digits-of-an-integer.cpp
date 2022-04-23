//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0;
        int product = 1;
        while (n)
        {
            int r = n % 10;
            sum += r;
            product *= r;
            n /= 10;
        }
        return product - sum;
    }
};