// Returns the matrix after reshaping, provided the rows and cols.
// https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int cols = mat.size();
        int rows = mat[0].size();
        if(cols*rows == r*c){
            vector<vector<int>> ans( r , vector<int> (c,0));
            for(int i=0;i<(rows*cols);i++){
                ans[(i%cols * rows + i/cols) / c][(i%cols * rows + i/cols) % c] = mat[i % cols][i / cols];

            }
            return ans;
        }else return mat;
    }
};