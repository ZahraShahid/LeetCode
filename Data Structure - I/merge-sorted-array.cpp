// Returns the merged sorted array given two sorted arrays
// https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
           j++;
        }
        sort(nums1.begin(), nums1.end());
    }
};