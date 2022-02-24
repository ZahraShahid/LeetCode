// Returns true if a given string contains only parentheses that are properly balanced.
// https://leetcode.com/problems/valid-parentheses/
#include <bits/stdc++.h>
class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        for(auto c:s){
            if (c=='('||c=='{'||c=='['){
                stk.push(c);
            }else{
                if(stk.empty()) return false;
                if(stk.top()=='(' && c==')' || stk.top()=='{' && c=='}' || stk.top()=='[' && c==']'){
                    stk.pop();
                }else return false;
            }
        }
        if(stk.empty()) return true;
        else return false;
    }
};