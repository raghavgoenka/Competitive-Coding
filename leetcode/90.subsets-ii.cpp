/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       
         sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        set<vector<int> > s;
  
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
            s.insert(v);
            
        }
        for (auto itr = s.begin(); itr != s.end(); itr++)
    {
       res.push_back(*itr);
    }
        return res;
 
    }
};
// @lc code=end

