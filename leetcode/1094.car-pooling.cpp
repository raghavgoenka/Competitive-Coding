/*
 * @lc app=leetcode id=1094 lang=cpp
 *
 * [1094] Car Pooling
 */

// @lc code=start
class Solution {
public:
     
    bool carPooling(vector<vector<int>>& t, int c) {
       
        int arr[1001]={0};
        int sum=0;
        for(int i=0;i<t.size();i++)
        {
            arr[t[i][1]]+=t[i][0];
            arr[t[i][2]]-=t[i][0];
        
        }
        for(int i=0;i<1001;i++)
        {
            sum+=arr[i];
            if(sum>c){return false;}
        }
        return true;
    }
};
// @lc code=end

