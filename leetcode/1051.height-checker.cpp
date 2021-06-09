/*
 * @lc app=leetcode id=1051 lang=cpp
 *
 * [1051] Height Checker
 */

// @lc code=start
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>exp;
        exp=heights;
        int c=0;
        sort(exp.begin(),exp.end());
        for(int i =0;i<exp.size();i++)
        {
            if(heights[i]!=exp[i]){c++;}
        }
        return c;
    }
};
// @lc code=end

