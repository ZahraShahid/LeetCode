// Returns the count of 1's in the unisgned int 32
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = bitset<32>(n).count();
        return count;
    }
};