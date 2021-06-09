/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         sort(nums.begin(),nums.end());
 int p=0;
int n=nums.size();
if(n==0){return 1;}
  for( int i=0;i<n;i++)
  { if(nums[i]>-1){p=i;break;}}
 int temp=nums[p];
 if(temp<0){return 1;}       
if(temp>1){return 1;}
for(int i=p;i<n;i++)
{   
    if(nums[i]==temp){continue;}
    else if(nums[i]==temp+1){temp=temp+1;continue;}
    else if(nums[i]!=temp+1){return temp+1;}
}

return nums[n-1]+1;
    }
};
// @lc code=end

