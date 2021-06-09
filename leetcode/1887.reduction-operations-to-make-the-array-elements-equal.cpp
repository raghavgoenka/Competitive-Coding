/*
 * @lc app=leetcode id=1887 lang=cpp
 *
 * [1887] Reduction Operations to Make the Array Elements Equal
 */

// @lc code=start
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int count=1,mx=0,n=nums.size();
        if(nums[n-1]==nums[0]){return 0;}
        for(int i=n-1;i>=0;i--)
        {  if(nums[i]==nums[0]){break;}
           else if(nums[i]==nums[i-1]){count++;}
            else {mx+=count;count++;}
        }
        return mx;
    }
};
// @lc code=end

