/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n=mat.size();
        int m=mat[0].size();
        int i=0,j=m-1;
        while(i<n&&j>=0)
        {
            if(mat[i][j]==t){return true;}
            else if(mat[i][j]>t){j--;}
            else{i++;}
        }
        return false;
    }
};
// @lc code=end

