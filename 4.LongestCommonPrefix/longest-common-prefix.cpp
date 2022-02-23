// Returns the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".
// https://leetcode.com/problems/longest-common-prefix/

#include <bits/stdc++.h>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        string first=strs.front();
        string last=strs.back();
        for(int i=0;i<first.length();i++){
            if(first[i]==last[i]) {
                ans+=first[i];
            }else{
                break;
            }
        }
        return ans;
    }
};