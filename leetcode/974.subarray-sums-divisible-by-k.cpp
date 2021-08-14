/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
          int n=nums.size() ,res=0,sum=0;
        unordered_map<int,int>mp;
    
         mp[0]=1;
        for(int i=0;i<n;i++){
            sum=(sum+nums[i])%k;
          
            if(sum<0){sum+=k;}
            sum=sum%k;
            res+=mp[sum];
            mp[sum]++;
        }
        return res;
        
    }
};
// @lc code=end

