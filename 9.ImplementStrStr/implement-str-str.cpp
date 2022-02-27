// Returns if a string contains another string as a substring. 
// Returns -1, or index of first occurrence of second string in first string.
// https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int index_str;
        if(needle.length()==0) return 0;
        else{
            return haystack.find(needle);
        }
        
    }
};