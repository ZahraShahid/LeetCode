// Returns the maimum water a container can hold. Provided array of heights that contains the possible height of the container
// https://leetcode.com/problems/container-with-most-water/

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int i=0;
            int j=height.size()-1;
            int maxim=0;
            while(i<j){
                int width=j-i;
                int h=min(height[i],height[j]);
                int area = width*h;
                maxim= max(maxim,area);
                if(height[i]<height[j]) i++;
                else if(height[i]>height[j]) j--;
                else {
                    i++;
                    j--;
                }   
            }
            return maxim;
        }
    };