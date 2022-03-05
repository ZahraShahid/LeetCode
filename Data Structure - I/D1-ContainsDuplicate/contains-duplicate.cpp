// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int> q;
        for (auto x:nums){
            q[x]++;
        }
        for(auto l:q){
            if(l.second>=2)
                return true;
        }
        return false;
    }
};