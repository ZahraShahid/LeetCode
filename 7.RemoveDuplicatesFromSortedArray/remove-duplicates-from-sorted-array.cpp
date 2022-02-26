// Return the size of the array after removing duplicates in-place.
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        nums.clear();
        for(auto const x:m){
            nums.push_back(x.first);
        }
        sort(nums.begin(),nums.end());
        return nums.size();
    }
};