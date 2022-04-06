// Returns the count of 3sum with multiplicity.
// https://leetcode.com/problems/3sum-with-multiplicity/

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n=arr.size();
        int mod = 1e9+7;
        int count =0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            count =(count+m[target-arr[i]])%mod;
            for(int j=0;j<i;j++){
                m[arr[i]+arr[j]]++;
            }
        }
        return count;
    }
};