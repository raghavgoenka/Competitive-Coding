/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
       vector<vector<int>> res;
        sort(v.begin(),v.end());
       int n=v.size();
        for(int i=0;i<n-1;i++)
        {
           
            if(v[i][1]>=v[i+1][0])
            {
               
                v[i+1][0]=v[i][0];
                if(v[i][1]>v[i+1][1]){
                    v[i+1][1]=v[i][1];
                }
                
              
     }
            else{
                res.push_back(v[i]);
            }
        }
       
        res.push_back(v[n-1]);
        return res;
        
    }
};
// @lc code=end

