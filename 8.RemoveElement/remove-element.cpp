// Returns the size of the array after removing a given value in-place.
// https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                m[nums[i]]++;
            }
        }
        nums.clear();
        for(auto const x:m){
            if(x.second>1){
                for(int j=0;j<x.second;j++){
                    nums.push_back(x.first);
                }
            }else nums.push_back(x.first);
        }
        return nums.size();
        
    }
};