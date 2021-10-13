/*
 * @lc app=leetcode id=1798 lang=cpp
 *
 * [1798] Maximum Number of Consecutive Values You Can Make
 */

// @lc code=start
class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
          sort(coins.begin(),coins.end());
       int  ans=1;
       for(int &i:coins)
       {  if(i<=ans){
           ans+=i;}
        else{break;}
       }
        return ans;
    }
    
};
// @lc code=end

