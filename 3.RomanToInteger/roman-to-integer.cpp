// Return the number represemnted by the given Roman String
// https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> umap;
        umap['I']=1;
        umap['V']=5;
        umap['X']=10;
        umap['L']=50;
        umap['C']=100;
        umap['D']=500;
        umap['M']=1000;
        int sum=0;
        for(int i=0;i<s.length()-1;i++){
            if(umap[s[i+1]]<=umap[s[i]]){
                sum+=umap[s[i]];
            }else{
                sum-=umap[s[i]];
            }   
        }
        sum=sum+umap[s[s.length()-1]];
        return sum;
    }
};