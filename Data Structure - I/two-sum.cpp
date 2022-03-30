// Returns the indices of two numbers in an array that add upto the target
// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ind;
        
        // Brute Force
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if((nums[i]+nums[j])== target){
        //             ind.push_back(i);
        //             ind.push_back(j);
        //         }
        //     }
        // }
    
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int requiredNum = target - nums[i];
            if(m.find(requiredNum) != m.end()){
                ind.push_back(i);
                ind.push_back(m[requiredNum]);
                break;
            }
            m[nums[i]]=i;
        }
        
        return ind;
    }
};