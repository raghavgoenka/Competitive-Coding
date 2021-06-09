/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n=nums.size(),p=0;
        for(int i=0;i<n;i++)
        {  
            int c=abs(nums[i]);
           
            nums[c-1]=-1*abs(nums[c-1]);
        }
        p=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0){nums[p]=i+1;p++;}
        }
        auto it=nums.begin(),it1=nums.end();
         nums.erase(it+p,it1);
        return nums;
        
    }
};
// @lc code=end

