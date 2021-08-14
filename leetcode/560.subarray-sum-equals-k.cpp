/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int n=nums.size() ,res=0,sum=0;
        unordered_map<int,int>mp;
    
        mp[0]++;
      
        for(int i=0;i<n;i++){
            sum+=nums[i];
          if (mp.find(sum - k) != mp.end()){res+=mp[sum-k];}
            mp[sum]++;
        }
        return res;
    }
};
// @lc code=end

