// Returns true if the given number is a palindrome. Otherwise, returns false.
// https://leetcode.com/problems/palindrome-number/
#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(int x) {
        string n = to_string(x);
        int l = 0;
        int r = n.length()-1;
        while(l<r){
            if(n[l]!=n[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};