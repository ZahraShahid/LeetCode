// Returns true if the palindrome is valid, after removing an element from the string.
// https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public: 
    bool isPalindrome(int i,int n,string s){
        while(i<n){
            if(s[i]==s[n]){
                i++;
                n--;
            }else return false;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int i=0;
        int n=s.length()-1;
        while(i<n){
            if(s[i]==s[n]){
                i++;
                n--;
            }else return isPalindrome(i+1,n,s) || isPalindrome(i,n-1,s);
        }
        return true;     
    }
};