/*
 * @lc app=leetcode id=1217 lang=cpp
 *
 * [1217] Minimum Cost to Move Chips to The Same Position
 */

// @lc code=start
class Solution {
public:
    int minCostToMoveChips(vector<int>& v) {
        int evencnt=0,oddcnt=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0){evencnt++;}
            else{oddcnt++;}
             
        }
        int mn=min(evencnt,oddcnt);
        return mn;
    }
};
// @lc code=end

