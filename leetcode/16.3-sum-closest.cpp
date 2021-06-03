/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,k=n-1,sum=0,mn=INT_MAX,mx=INT_MAX;
  for(int j=0;j<n;j++)
  {   i=j+1,k=n-1;
        while(i<k)
        {
          sum=nums[j]+nums[i]+nums[k];
            int dif=abs(t-sum);
            
            if(sum==t){return t;}
            else if(sum<t){i++;}
            else if(sum>t){k--;}
            
            mn=min(dif,mn);
            if(dif<=mn){mn=dif;mx=sum;}
           
           
        }
  }   
        return mx;
    }
};
// @lc code=end

