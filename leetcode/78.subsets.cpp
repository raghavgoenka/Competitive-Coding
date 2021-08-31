/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        
        for(int i=0;i<(1<<nums.size());i++)
        { 
            vector<int>v;
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                {
                    v.push_back(nums[j]);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};
// @lc code=end

