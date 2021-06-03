/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
    
public:
    void permutations(vector<int>& nums, vector<vector<int>>& res, vector<int>value,map<int,int>mp)
    {
        if(value.size()==nums.size())
        {
            res.push_back(value);//pushing the value vector in resut array!
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==0){
            
                mp[nums[i]]=1;
                value.push_back(nums[i]);
                permutations(nums,res,value,mp);
                value.pop_back();//after recursion call returns this will  pop the element from the value vector
                mp[nums[i]]=0;//and this will set the element value to 0 in map
            }
            
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        map<int,int>mp;
        vector<int>value;
        permutations(nums,res,value,mp);
        return res;
    }
};
// @lc code=end

