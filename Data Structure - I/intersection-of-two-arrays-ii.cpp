// Returns the intersection of two arrays.
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int,int> m;
        for(auto x:nums1){
            m[x]++;
        }
        for(auto y:nums2){
            if(m[y]){
                v.push_back(y);
                m[y]--;
            }
        }
       return v;
    }
};